/*
����һ���ַ����ж�����ַ������ֻ�����ĸ���������ַ�����Ӧ����ķ�������Ϊ��"alphabet"��"digit"��"others"��������ʹ��stdio.h�⺯����

|       | ���� | ���     |
| ----- | ---- | -------- |
| ����1 | a    | alphabet |
| ����2 | 6    | digit    |
| ����3 | #    | others   |

ֻ������һ���ַ������ַ�Χ��ASCII���ڡ���������ʣ�ĩβ�޿ո�ͻ��з���
*/
#include<stdio.h>
int main(void){
	char input;
	scanf("%c",&input);
	
	//���ദ�����ۣ��ǵ��ж�ASCII���ǿ������������ֱȴ�С�ķ�ʽ�� 
	if((input>='A'&&input<='Z')||(input>='a'&&input<='z')){
		printf("alphabet");
	}else if(input>='0'&&input<='9'){
		printf("digit");
	}else{
		printf("others");
	}
	
	return 0; 
}
