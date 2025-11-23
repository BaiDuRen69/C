//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。
#include<stdio.h>
int main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100};
	for(int i=0; i<10; i++)
		printf("%d ",a[i]);
	printf("\n请输入要插入的数:");
	int input;
	scanf("%d",&input);
	if(input>a[9])
		a[10]=input;
	else
	{
		for(int i=0; i<10; i++)
		{
			if(input<=a[i])
			{
				for(int j=10; j>i; j--)
					a[j]=a[j-1];
				a[i]=input;
				break;
			}
		}
	}
	for(int i=0; i<11; i++)
		printf("%d ",a[i]);
	
}
