/*
4.5.2-回文检测器

回文即一个字符串以及其反向的字符串是一致的。例如说1234321是回文，但是asdw就不是。

首先程序输入一个没有空格的字符串，然后你需要检测它是不是回文。是则输出yes，否则输出no

测试单词最长为32位(含结尾符)

|       | 输入     | 输出 |
| ----- | -------- | ---- |
| 案例1 | 1212333  | no   |
| 案例2 | asdsa    | yes  |
| 案例3 | !!zzzz!! | yes  |

提示：你可以将你4.5.1的代码封装成函数用在此题上。
*/ 
#include<stdio.h>
int char_length(char *target);
int main(void){
	char text[32];
	scanf("%s",text);
	
	int length=char_length(text); 
	int flag=1; 
	//也有其他比较精妙的实现方法，例如说指针+递归，这里用的是for，比较容易理解一些 
	for(int i=0,j=length-1;i<=j;i++,j--){       //这个地方的逗号是一个运算符，平常很少用，总之就可以将i++和j--黏在一起独立操作。 
		if(text[i]!=text[j]){
			flag=0;
			break;
		}
	}
	
	if(flag){
		printf("yes");
	}else{
		printf("no");
	}
} 
int char_length(char *target){
	int length;
	for(length=0;target[length]!=0;length++);  
	return length;
}
