/*
牛顿求根法用处是通过迭代的算法，逼近出某一个函数的某一个零点。首先假设一个初始点x1，
然后以初始点开始带入如下的一个迭代方程来不断更新此点：

在理想的情况下，牛顿求根法的迭代会不断逼近一个零点，更多的数学原理请参照维基百科。
你现在的任务是实现一元五次方程的牛顿求根法程序。

现在输入七个整数，分别是五次方程的六个系数a,b,c,d,e,f，第七个输入是牛顿求根法的初始位置：


请你实现牛顿求根法的代码，请在迭代差距小于0.00001的时候停下来，并且输出三位小数的结论。

注意：在一些特定情况下，不当的初始点会引起过程不收敛。
但是测试程序中所有的数据都保证不会引起过程不收敛，你不需要检查这个问题。

|       | 输入             | 输出   |
| ----- | ---------------- | ------ |
| 案例1 | 5 3 1 11 5 3 -2  | -1.387 |
| 案例2 | -1 4 9 -3 3 1 -2 | -1.906 |

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
