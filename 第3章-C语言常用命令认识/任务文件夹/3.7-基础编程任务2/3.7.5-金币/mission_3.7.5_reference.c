/*
国王发金币给骑士，发钱方法如下：

第1天骑士获得1枚金币
第2天和第3天骑士获得2枚金币
第4,5,6天骑士获得3枚金币
...

这种工资模式会一直持续下去，当第n天连续获得n枚金币的时候，骑士就会工资上涨为n+1枚金币。
请问前K天的时候（K不会超过10000，关于数据超界你不需要做检测），骑士一共获得了多少金币？

|       | 输入 | 输出  |
| ----- | ---- | ----- |
| 案例1 | 6    | 14    |
| 案例2 | 1000 | 29820 |
仅输出数字，末尾无空格和换行符。
*/ 
#include<stdio.h>
int main(void){
	int days,coins=0;
	scanf("%d",&days);
	
	//判断主体 
	for(int step=1;days>0;step++){                    //step阶段，即每一天发钱的多少 
		for(int counter=1;counter<=step;counter++){   //counter计数器，用于探测何时涨薪 
			coins+=step;
			days--;
			if(days==0){                              //到达指定日期之后就立马终止 
				break;
			}
		}
	}
	
	printf("%d",coins);
	
	return 0; 
} 
