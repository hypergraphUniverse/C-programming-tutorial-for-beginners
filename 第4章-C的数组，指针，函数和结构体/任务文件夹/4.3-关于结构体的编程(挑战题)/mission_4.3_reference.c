/*
����Ҫ�ýṹ��������һ���������ݵ�Сϵͳ�����Сϵͳ�����ſͻ���������Ϣ��

> �ͻ�������(�޿ո�ĵ���,���Ȳ�����20���ɴ�ӡ�ַ�)
> �ͻ����ֻ���
> �ͻ��Ƿ�Ϊ��˾��VIP��Ա 
����ϵͳ��Ҫ�������˲�����20���㲻��Ҫ�ж�����ʱ�Ƿ񳬳�20�ˣ�������ĳ������Ҫ�ܹ�����20���ˣ� 


���Сϵͳ�������������µķ�Ӧ 

1���ս������֮�󣬽������˵������˵�����Ҫѭ���ȴ�һ�����ֵ����� 

������������0�����˳�����
����1�������֧1����������û�������
����2�������֧2�������µ��û�������
����3�������֧3��ɾ���ض��û�������
����������������ӣ�������һ��ѭ�� 
 
2����������֧1���������µĸ�ʽ��ӡ��ϵͳ�������˵������ա��ֻ����Ƿ�VIP

////////�����ʼ///////////////��һ�в�������� 
Name: Thomas Muller
Tel: 13502100000
Vip: Yes

Name: Alexander Hamilton
Tel: 112329111111
Vip: No

....

///////�������/////////////////��һ�в��������

3����������֧2�������������ĸ�ֵ��ʾ�����ա��ֻ����Ƿ�VIP

���밸��1��
Thomas Muller 13502100000 1
���밸��2��
Alexander Hamilton 112329111111 0 

4�� ��������֧3����������һ�����֣���ʾɾ����n���˵����ϣ����ҰѺ�����˵�������ǰ����Ų�����λ��
n����1�����ֵ֮�䡣�����������ִ����������������ɾ���� 


�ǳ���������ͬĿ¼��mission_4.3_reference_with_prompt.exe���ͳ������һЩ������
�������д�ĳ����Լ���׼���ճ���mission_4.3_reference.exe������Ҫ���κε���ʾ� 

*/
//����û���ú�����ʵ�֡����������ֵ�λ�ã���û�н�����ָ��Ϊ�����ĺ������걾��֮������������ܹ��Ż��ġ� 
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
			printf("ɾ���������б��еڼ�λ:");
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

 
