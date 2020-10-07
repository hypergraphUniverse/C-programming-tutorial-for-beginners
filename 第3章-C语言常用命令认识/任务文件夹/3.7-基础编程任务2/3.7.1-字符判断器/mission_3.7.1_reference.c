/*
输入一个字符，判断这个字符是数字还是字母还是其他字符。对应输入的反馈单词为："alphabet"，"digit"，"others"。仅允许使用stdio.h库函数。

|       | 输入 | 输出     |
| ----- | ---- | -------- |
| 案例1 | a    | alphabet |
| 案例2 | 6    | digit    |
| 案例3 | #    | others   |

只会输入一个字符，出现范围在ASCII表内。仅输出单词，末尾无空格和换行符。
*/
#include<stdio.h>
int main(void){
	char input;
	scanf("%c",&input);
	
	//分类处理讨论，记得判断ASCII表是可以用如下这种比大小的方式的 
	if((input>='A'&&input<='Z')||(input>='a'&&input<='z')){
		printf("alphabet");
	}else if(input>='0'&&input<='9'){
		printf("digit");
	}else{
		printf("others");
	}
	
	return 0; 
}
