//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//程序分析：学会分解出每一位数，如下解释。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int unsigned num=rand()%100000;
	printf("%d\n",num);
	int sum=0;
	while(num>0)
	{
		int a=num%10;
		num/=10;
		sum++;
		printf("%d ",a);
	}
	printf("\n%d",sum);
}
