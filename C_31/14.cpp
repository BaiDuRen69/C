//题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"，
//  例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。
//程序分析：请参照：C 练习实例9。
#include<stdio.h>
int main()
{
	
	for(int i=1; i<=1000; i++)
	{
		int sum=0;
		for(int j=1; j<i; j++)
		{
			if(i%j==0)
				sum+=j;
		}
		if(sum==i)
		{
			printf("%d=1",i);
			for(int j=2; j<i; j++)
			{
				if(i%j==0)
					printf("+%d",j);
			}
			printf("\n");
		}
		
	}
}
