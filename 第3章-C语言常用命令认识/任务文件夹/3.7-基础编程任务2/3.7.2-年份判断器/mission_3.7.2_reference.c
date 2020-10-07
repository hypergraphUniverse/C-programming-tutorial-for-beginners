/*
格里历中，闰年的规则如下：

从0开始计算，每4年1闰，例如公元4年是闰年；
但每逢100年的日子，则不是闰年，例如1900年不是闰年；
但是又在其中每逢400年的日子，则又是闰年，例如2000年是闰年。

输入只会是数字，大小一定能被int容纳。如果这个数字是闰年输出yes，否则输出no，如果输入无效的年份，输出invalid。

需要注意的是，虽然我们说从0开始计数，但是格里历中公元没有0年，公元1年之前是公元前1年。
而且我们需要关注的内容就只有公元后的年份，因此0以下的数字都是invalid。

|       | 输入 | 输出    |
| ----- | ---- | ------- |
| 案例1 | 2000 | yes     |
| 案例2 | 2004 | yes     |
| 案例3 | 1900 | no      |
| 案例4 | 1901 | no      |
| 案例5 | 0    | invalid |
仅输出单词，末尾无空格和换行符。
*/ 
#include<stdio.h>
int main(void){
	int input,is_leap_year;
	scanf("%d",&input);
	
	//过滤无效数据 
	if(input<=0){
		printf("invalid");
		return 0;
	}
	
	//逻辑判断。结论存在is_leap_year中 
	if(input%400==0){        //你也可以用复合逻辑 (input%400==0)||((input%100!=0)&&(input%4==0)),而且你也可以将!=0去掉，==0变成否定逻辑。 
		is_leap_year=1;
	}else if(input%100==0){
		is_leap_year=0;
	}else if(input%4==0){
		is_leap_year=1;
	}else{
		is_leap_year=0;
	} 
	
	//输出结论 
	if(is_leap_year){
		printf("yes");
	}else{
		printf("no");
	}
	
	return 0;
} 
