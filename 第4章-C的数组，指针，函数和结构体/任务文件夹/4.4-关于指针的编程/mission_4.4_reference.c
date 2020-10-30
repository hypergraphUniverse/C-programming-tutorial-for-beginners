/*
这一道问题只让你编写一个函数。这个函数的输入是一个结构体的指针，这个结构体中含有用户的一系列信息（参见4.3的任务）
而这个函数需要按照如下的格式将这个结构体中的文字打印出来。

Name: Thomas Muller
Tel: 13502100000
Vip: Yes
<一个空行> 

请不要对主函数进行任何的编辑；仅仅操作函数。 
*/
#include<stdio.h>
#include<string.h>
struct Profile{
	char first_name[21];
	char last_name[21];
	long long tele;
	int isVip; 
};
void print_data(struct Profile *target_pt);
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
				print_data(&person[i]);
			} 
		}else if(input==2){
			scanf("%s",person[num].first_name);
			scanf("%s",person[num].last_name);
			scanf("%lld",&person[num].tele);
			scanf("%d",&person[num].isVip);
			num++;
		}else if(input==3){
			int target;
			scanf("%d",&target);
			for(int i=target-1;i<num-1;i++){
				memcpy(&person[i],&person[i+1],sizeof(struct Profile));
			}
			num--; 
		} 
	}
} 

void print_data(struct Profile *target_pt){
	printf("Name: %s %s\n",target_pt->first_name,target_pt->last_name);
	printf("Tel: %lld\n",target_pt->tele);
	if(target_pt->isVip==1){
		printf("Vip: Yes\n"); 
	}else{
		printf("Vip: No\n");
	}
	printf("\n");
} 
