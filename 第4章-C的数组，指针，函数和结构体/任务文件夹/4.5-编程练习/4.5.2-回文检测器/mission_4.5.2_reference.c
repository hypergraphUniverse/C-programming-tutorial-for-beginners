/*
4.5.2-���ļ����

���ļ�һ���ַ����Լ��䷴����ַ�����һ�µġ�����˵1234321�ǻ��ģ�����asdw�Ͳ��ǡ�

���ȳ�������һ��û�пո���ַ�����Ȼ������Ҫ������ǲ��ǻ��ġ��������yes���������no

���Ե����Ϊ32λ(����β��)

|       | ����     | ��� |
| ----- | -------- | ---- |
| ����1 | 1212333  | no   |
| ����2 | asdsa    | yes  |
| ����3 | !!zzzz!! | yes  |

��ʾ������Խ���4.5.1�Ĵ����װ�ɺ������ڴ����ϡ�
*/ 
#include<stdio.h>
int char_length(char *target);
int main(void){
	char text[32];
	scanf("%s",text);
	
	int length=char_length(text); 
	int flag=1; 
	//Ҳ�������ȽϾ����ʵ�ַ���������˵ָ��+�ݹ飬�����õ���for���Ƚ��������һЩ 
	for(int i=0,j=length-1;i<=j;i++,j--){       //����ط��Ķ�����һ���������ƽ�������ã���֮�Ϳ��Խ�i++��j--���һ����������� 
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
