/*
ţ��������ô���ͨ���������㷨���ƽ���ĳһ��������ĳһ����㡣���ȼ���һ����ʼ��x1��
Ȼ���Գ�ʼ�㿪ʼ�������µ�һ���������������ϸ��´˵㣺

�����������£�ţ��������ĵ����᲻�ϱƽ�һ����㣬�������ѧԭ�������ά���ٿơ�
�����ڵ�������ʵ��һԪ��η��̵�ţ�����������

���������߸��������ֱ�����η��̵�����ϵ��a,b,c,d,e,f�����߸�������ţ��������ĳ�ʼλ�ã�


����ʵ��ţ��������Ĵ��룬���ڵ������С��0.00001��ʱ��ͣ���������������λС���Ľ��ۡ�

ע�⣺��һЩ�ض�����£������ĳ�ʼ���������̲�������
���ǲ��Գ��������е����ݶ���֤����������̲��������㲻��Ҫ���������⡣

|       | ����             | ���   |
| ----- | ---------------- | ------ |
| ����1 | 5 3 1 11 5 3 -2  | -1.387 |
| ����2 | -1 4 9 -3 3 1 -2 | -1.906 |

*/ 
#include<stdio.h>
double func(double x);
double dfunc(double x);
double abs(double x);
int a,b,c,d,e,f;
int main(void){
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	
	int start;
	double x;
	
	scanf("%d",&start);
	x=(double)start;
	
	while(1){
		double x_new;
		x_new=x-(func(x)/dfunc(x));
		if(abs(x_new-x)<=0.00001){   
			break;
		}
		x=x_new;
	}
	
	printf("%.3lf",x);
}
double func(double x){
	return a*x*x*x*x*x+b*x*x*x*x+c*x*x*x+d*x*x+e*x+f;
}
double dfunc(double x){
	return 5*a*x*x*x*x+4*b*x*x*x+3*c*x*x+2*d*x+e;
}
double abs(double x){
	if(x<0){
		return -x;
	}else{
		return x;
	}
}
