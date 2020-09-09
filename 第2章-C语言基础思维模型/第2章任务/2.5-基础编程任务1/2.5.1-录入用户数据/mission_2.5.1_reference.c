/*
mission_2.5.1  录入用户数据 
现在你需要制作一个（非常简陋的）录入用户数据的信息收集器。
分别向用户要求输入：生日年/月/日，电话号码，名字首字母。

输入案例如下：
箭头>和后面的一个空格不在正文中;<User>指的是用户输入位置。
> Your Birthday
> Year:<User>
> Month:<User>
> Day:<User>
> Your telephone:<User>
（不要求校验任何数据的正确性）

最后一个按钮按下去后，程序紧接着输出用户的信息，如下是一个案例：
> ********************
> Info:
> DOB:2000/1/1
> Tel:13000000000
> ********************

提示：

1. 对于long long 类型的变量转换说明是"%lld"
2. 必须在编译器选项中打开"-std=c99"，并且暂时关掉警告"-Wall -Wextra"(看下面的"一个建议"中的操作)；
3. 这个程序用自动化检测脚本会显示上有一些差异，请自主检查或者有问题的时候询问我。

*/ 
#include<stdio.h>
int main(void){
	int year,month,day;
	printf("Your Birthday\n");
	printf("Year:");
	scanf("%d",&year);
	printf("Month:");
	scanf("%d",&month);
	printf("Day:");
	scanf("%d",&day);
	
	long long tele;
	printf("Your telephone:");
	scanf("%lld",&tele);
	
	
	printf("********************\n");
	printf("Info:\n");
	printf("DOB:%d/%d/%d\n",year,month,day);
	printf("Tel:%lld\n",tele);
	printf("********************\n");
	
	return 0;
} 
