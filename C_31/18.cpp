//题目：打印出如下图案（菱形）。
//            *
//           ***
//          *****
//         *******
//          *****
//           ***
//            *
//程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，
//          利用双重for循环，第一层控制行，第二层控制列。
#include<stdio.h>
int main()
{
	for(int i=3; i>=0; i--)//上四行
	{
		for(int j=i; j>0; j--)
		{
			printf(" ");
		}
		for(int j=7-i*2; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=1; i<4; i++)//下三行
	{
		for(int j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(int j=7-2*i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
