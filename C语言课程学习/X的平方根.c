// 求x的平方根，取整即可
#include<stdio.h>
int main()
{
	int input=0;
	scanf("%d",&input);
	int a=1;
	while(a*a<=input)
	{
		a++;
	}
	printf("%d",a-1);
	return 0;
}
