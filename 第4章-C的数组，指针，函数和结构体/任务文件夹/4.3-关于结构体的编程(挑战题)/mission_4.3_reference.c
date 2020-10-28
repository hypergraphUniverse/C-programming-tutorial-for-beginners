/*
你需要用结构体来制作一个保存数据的小系统。这个小系统管理着客户的如下信息：

> 客户的姓名(无空格的单词,长度不超过20个可打印字符)
> 客户的手机号
> 客户是否为公司的VIP会员 
整个系统需要管理到的人不超过20，你不需要判断输入时是否超出20人，但是你的程序必须要能够容纳20个人！ 


这个小系统程序进入后有如下的反应 

1，刚进入程序之后，进入主菜单，主菜单则需要循环等待一个数字的输入 

如果这个是数字0，则退出程序；
输入1，进入分支1，输出所有用户的数据
输入2，进入分支2，输入新的用户的数据
输入3，进入分支3，删除特定用户的数据
输入其他数字则忽视，进入下一个循环 
 
2，如果进入分支1，则按照如下的格式打印出系统中所有人的名、姓、手机和是否VIP

////////输出开始///////////////这一行不在输出中 
Name: Thomas Muller
Tel: 13502100000
Vip: Yes

Name: Alexander Hamilton
Tel: 112329111111
Vip: No

....

///////输出结束/////////////////这一行不在输出中

3，如果进入分支2，则依次输入四个值表示名、姓、手机和是否VIP

输入案例1：
Thomas Muller 13502100000 1
输入案例2：
Alexander Hamilton 112329111111 0 

4， 如果进入分支3，则再输入一个数字，表示删除第n个人的资料，并且把后面的人的资料向前依次挪动填补空位；
n介于1到最大值之间。如果输入的数字大于最大人数，则不做删除。 


非常建议运行同目录的mission_4.3_reference_with_prompt.exe，和程序进行一些交互。
但是你编写的程序，以及标准参照程序mission_4.3_reference.exe，则不需要有任何的提示语。 

*/
//这里没有用函数来实现。这个任务出现的位置，还没有讲解以指针为参数的函数。完本章之后，这个内容是能够优化的。 
#include<stdio.h>
#include<string.h>
struct Profile{
	char first_name[21];
	char last_name[21];
	long long tele;
	int isVip; 
};
int main(void){
	int input=0;
	int num=0;
	struct Profile person[20];
	while(1){
		scanf("%d",&input);
		if(input==0){
			break;
		}else if(input==1){
			for(int i=0;i<num;i++){
				printf("Name: %s %s\n",person[i].first_name,person[i].last_name);
				printf("Tele: %lld\n",person[i].tele);
				if(person[i].isVip==1){
					printf("Vip: Yes\n"); 
				}else{
					printf("Vip: No\n");
				}
				printf("\n");
			} 
		}else if(input==2){
			scanf("%s",person[num].first_name);
			scanf("%s",person[num].last_name);
			scanf("%lld",&person[num].tele);
			scanf("%d",&person[num].isVip);
			num++;
		}else if(input==3){
			int target;
			printf("删除的人在列表中第几位:");
			scanf("%d",&target);
			if(target>0&&target<=num){
				for(int i=target-1;i<num-1;i++){
				memcpy(&person[i],&person[i+1],sizeof(struct Profile));
				}
				num--;
			}
		} 
	}
} 

 
