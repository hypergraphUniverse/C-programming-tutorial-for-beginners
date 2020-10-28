/*
请用函数递归的方式实现斐波那契数列的输入输出数列。 
斐波那契数列的第一和第二项都是1，然后接下来的数字都是前面两项的数字之和。这个数组也就成了1,1,2,3,5,8,13,21,34,55,89,...

现在请你写出一个程序，输入想要的斐波那契数列项数，输出结果（这个数字不会超过50，关于数据超界你不需要做检测）。
仅输出数字，末尾无空格和换行符。

|       | 输入 | 输出 |
| ----- | ---- | ---- |
| 案例1 | 6    | 8    |
| 案例2 | 10   | 55   | 
温馨提示：请使用long long容纳变量 
*/  
#include<stdio.h>
long long fib(int num);
int main(void){
	int num;
	scanf("%d",&num);
	printf("%lld",fib(num));
} 

long long fib(int num){
	if(num==1||num==2){
		return 1;
	}else{
		return fib(num-1)+fib(num-2); 
	}
}
