/*
mission_2.5.1  ¼���û����� 
��������Ҫ����һ�����ǳ���ª�ģ�¼���û����ݵ���Ϣ�ռ�����
�ֱ����û�Ҫ�����룺������/��/�գ��绰���룬��������ĸ��

���밸�����£�
��ͷ>�ͺ����һ���ո���������;<User>ָ�����û�����λ�á�
> Your Birthday
> Year:<User>
> Month:<User>
> Day:<User>
> Your telephone:<User>
����Ҫ��У���κ����ݵ���ȷ�ԣ�

���һ����ť����ȥ�󣬳������������û�����Ϣ��������һ��������
> ********************
> Info:
> DOB:2000/1/1
> Tel:13000000000
> ********************

��ʾ��

1. ����long long ���͵ı���ת��˵����"%lld"
2. �����ڱ�����ѡ���д�"-std=c99"��������ʱ�ص�����"-Wall -Wextra"(�������"һ������"�еĲ���)��
3. ����������Զ������ű�����ʾ����һЩ���죬�������������������ʱ��ѯ���ҡ�

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
