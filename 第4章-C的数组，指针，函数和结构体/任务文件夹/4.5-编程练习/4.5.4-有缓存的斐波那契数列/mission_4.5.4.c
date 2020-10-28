/*
在递归的过程中，有大量的值被重复运算，你需要做的任务，是用动态内存的方法，
缓存已经运算过的值，如果在递归调用的时候，值已经被运算了，那么直接取用此值，不必再递归运算。

测试值会适当取大一些（不会超过long long的容纳范围），并且测试程序也会按照惯例值来收紧测试时间，超时自动错误。
当然，每一台电脑的性能不同，测试程序卡时间的做法不一定有效(也有可能误伤)。 
请你一定要实现递归缓存（而不是动态内存申请数组后，从1开始挨着向后运算）。

程序输入斐波那契的一个项数，然后程序输出对影响是的 

需要注意的是，你需要做的内容是编辑递归函数，main函数不需要进行操作！ 
*/ 
#include<stdio.h>
#include<stdlib.h>
long long fib(long long *array,int num);
int main(void){          //请注意，不要操作main函数！ 
	int num;
	scanf("%d",&num);
	
	long long *ptr=(long long *)malloc(sizeof(long long)*num);
	for(int i=0;i<num;i++){
		ptr[i]=0;
	}
	
	printf("%lld",fib(ptr,num)); 
} 
long long fib(long long *array,int num){
	//你的代码应该写在这里 
}
