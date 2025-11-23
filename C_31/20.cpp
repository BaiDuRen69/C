//题目：求 1 + 2! + 3! + ... + 20! 的和。
//程序分析：此程序只是把累加变成了累乘。
//#include<stdio.h>
//int main()
//{
//	long long sum=0;
//	for(int i=1; i<21; i++)
//	{
//		long long part=1;
//		for(int j=i; j>0; j--)
//			part*=j;
//		sum+=part;
//	}
//	printf("%llu",sum);
//}





#include<stdio.h>
long long puls(int a)// 运用递归求阶乘
{
	if(a==1)
		return 1;
	return a*puls(a-1);
}
int main()
{
	long long sum=0;
	for(int i=1; i<21; i++)
	{
		sum+=puls(i);
	}
	printf("%llu",sum);
}
