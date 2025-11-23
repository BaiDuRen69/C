//1的1次方到10的10次方相加，结果是多少
//第一种方法：
#include<stdio.h>
int main()
{
	long long sum=0;
	for(int i=1; i<=10; i++)
	{
		long long a=1;
		for(int j=1; j<=i; j++)
		{
			a*=i;
		}
		sum+=a;
	}
	printf("%lld\n",sum);
	return 0;
}
//第二种方法：
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	long long a=0;
//	long long sum=0;
//	for(int i=1; i<=10; i++)
//	{
//		a =pow(i,i);
//		sum+=a;
//	}
//	
//
//	printf("%lld",sum);
//	return 0;
//}
