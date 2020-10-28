/*
���罻ý���ϣ������ῴ�����ĳһ���۵�ͬ��������������Լ������
���磬��ĳһ�۵��ʾ֧�ֵ��� 1498 �ˣ����Ե��� 902  �ˣ���ô��ͬ�뷴�Եı������Լ򵥵ļ�Ϊ1498:902��
���������������ֵ̫������һ�ۿ������ǵĹ�ϵ��
��������������ӣ�����ѱ�����Ϊ 5:3����Ȼ����ʵ�����һ����������Ȼ�ܹ���Ϊ׼ȷ�ط�ӳ��������ͬʱҲ�ԵñȽ�ֱ�ۡ�

�ָ���֧������ A���������� B���Լ�һ������  L��
���㽫 A �� B ����Ϊ A�� �� B�� ��Ҫ���� A�� �� B�� �������� L �� A���� B������(�������������Լ����1)��ǰ���£� 
A�� / B��  ��  A / B ����  A�� / B�� - A / B ��ֵ������С��

�����롿���빲һ�У�������������  A��B��L��ÿ��������֮����һ���ո�������ֱ��ʾ֧�����������������Լ����ޡ�
������������һ��,������������  A����B�����м���һ���ո��������ʾ�����ı�����

���� 100%�����ݣ�1 �� A �� 1,000,000��1 �� B �� 1,000,000��1 �� L �� 100��A/B �� L��

|       | ����        | ��� |
| ----- | ----------- | ---- |
| ����1 | 1498 902 10 | 5 3  |
*/ 
#include<stdio.h>
int GCD_1(int x,int y);
int GCD(int x,int y);
int main(void){
	int a,b,max;
	int a_res=1,b_res=1;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&max);
	
	double init=(double)a/b,approx=(double)max;
	
	for(int i=1;i<=max;i++){
		for(int j=1;j<=max;j++){
			if((double)i/j>=(double)a/b&&GCD_1(i,j)&&(double)i/j-init<=approx-init){
				a_res=i;
				b_res=j;
				approx=(double)i/j;
			}
		}
	}
	printf("%d %d",a_res,b_res);
}
int GCD_1(int x,int y){
	if(x<y){
		int temp=y;
		y=x;
		x=temp;
	}
	if(GCD(x,y)==1){
		return 1;
	}else{
		return 0;
	}
}
int GCD(int x,int y){
	int rest=x%y;
	if(rest){
		return GCD(y,rest);
	}else{
		return y;
	}
}
