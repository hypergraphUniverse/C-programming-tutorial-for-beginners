/*
��һ������ֻ�����дһ�����������������������һ���ṹ���ָ�룬����ṹ���к����û���һϵ����Ϣ���μ�4.3������
�����������Ҫ�������µĸ�ʽ������ṹ���е����ִ�ӡ������

Name: Thomas Muller
Tel: 13502100000
Vip: Yes
<һ������> 

�벻Ҫ�������������κεı༭���������������� 
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
