#include<stdio.h>
#include<stdlib.h>
int main(void){
	system("cls");
	int income;
	printf("Please input your monthly income:");
	printf("$____________\b\b\b\b\b\b\b\b\b\b");
	scanf("%d",&income);
	printf("That\'s $%d a year!\n",income*12);
	return 0; 
} 
