/*
在社交媒体上，经常会看到针对某一个观点同意与否的民意调查以及结果。
例如，对某一观点表示支持的有 1498 人，反对的有 902  人，那么赞同与反对的比例可以简单的记为1498:902。
不过这个比例的数值太大，难以一眼看出它们的关系。
对于上面这个例子，如果把比例记为 5:3，虽然与真实结果有一定的误差，但依然能够较为准确地反映调查结果，同时也显得比较直观。

现给出支持人数 A，反对人数 B，以及一个上限  L，
请你将 A 比 B 化简为 A’ 比 B’ ，要求在 A’ 和 B’ 均不大于 L 且 A’和 B’互质(两个整数的最大公约数是1)的前提下， 
A’ / B’  ≥  A / B ，且  A’ / B’ - A / B 的值尽可能小。

【输入】输入共一行，包含三个整数  A，B，L，每两个整数之间用一个空格隔开，分别表示支持人数、反对人数以及上限。
【输出】输出共一行,包含两个整数  A’，B’，中间用一个空格隔开，表示化简后的比例。

对于 100%的数据，1 ≤ A ≤ 1,000,000，1 ≤ B ≤ 1,000,000，1 ≤ L ≤ 100，A/B ≤ L。

|       | 输入        | 输出 |
| ----- | ----------- | ---- |
| 案例1 | 1498 902 10 | 5 3  |
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
