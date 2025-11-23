//题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
//程序分析：请抓住分子与分母的变化规律
#include<stdio.h>
int main()
{
	double zi=2,mu=1,temp=0;
	double sum=0;
	for(int i=1; i<=20; i++)
	{
		sum+=zi/mu;
		temp=zi;
		zi+=mu,mu=temp;
	}
	printf("%f",sum);
}
