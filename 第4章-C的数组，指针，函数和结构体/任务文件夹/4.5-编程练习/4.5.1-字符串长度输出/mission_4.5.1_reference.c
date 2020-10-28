/*
4.5.1-字符串长度输出

首先程序输入一个单词，你需要将这个没有空格的单词保存到一个字符串中，然后你需要输出这个单词的实际长度，不计算结尾符。

测试的单词最长为32位(含结尾符)

|       | 输入        | 输出 |
| ----- | ----------- | ---- |
| 案例1 | 123111      | 6    |
| 案例2 | Apple-pie   | 9    |
| 案例3 | asdfg123::: | 11   |

*/ 

#include<stdio.h>
int main(void){
	char data[32];
	scanf("%s",data);
	int length;
	for(length=0;data[length]!=0;length++)
	    ;  //这里用到了空语句，for主体没有任何语句
	printf("%d",length); 
} 
