/*
请按照要求输出int, short, long, long long, char, float, double
要求格式：

The int in this computer has 4 Byte(s);
The short in this computer has ...
... 

*/ 
#include<stdio.h>
int main(void){
	printf("The int in this computer has %d Byte(s);\n",sizeof(int));
	
	return 0; 
} 
