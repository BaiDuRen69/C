//题目：输入某年某月某日，判断这一天是这一年的第几天？
//程序分析：以3月5日为例，应该先把前两个月的加起来，
//然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
#include<stdio.h>
int main()
{
	int year,month,day,end=0;
	scanf("%d %d %d",&year,&month,&day);
	if(year<=0||month<=0||month>12||day<=0)
	{
		printf("你在开玩笑吗！！！");
		return 0;
	}
	int monthsum[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%4==0&&year%100!=0)
	{
		if(month==2&&day>29)
		{
			printf("闰年的二月只有29天！！！");
			return 0;
		}
		if(month>2)
		{
			end+=1;
		}
	}
		if(day>monthsum[month-1])
		{
			printf("一个月有这么多天吗！！！");
			return 0;
		}
    for(int i=1; i<month; i++)
	{
		end+=monthsum[i];
	}
	
	end+=day;
	printf("%d",end);
	return 0;
}
