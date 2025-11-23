//题目：对10个数进行排序。
//#include<stdio.h>
//int main()
//{
//	int a[]={3,5,1,9,5,0,6,10,8,2};
//	int len=sizeof(a)/sizeof(int);
//	for(int i=0; i<len-1; i++)
//	{
//		for(int j=i+1; j<len; j++)
//		{
//			if(a[i]>a[j])
//			{
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	for(int i=0; i<len; i++)
//	{
//		printf("%d ",a[i]);
//	}
//}





#include<stdio.h>
int main()
{
	int a[]={3,1,7,8,9};
	int len=sizeof(a)/sizeof(int);
	int fast=len-1;// 优化，已排好的不再比较
	for(int i=0; i<len; i++)//冒泡排序，两两比较
	{
		int change=-1;//当change在一个循坏中不发生变化是，该数组已完成排序，
//                     可判断change的值是否改变来决定是否提前结束排序		
		for(int j=0; j<fast; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				change=j;
			}
		}
		if(change==-1)
			break;
		fast=change;
	}
	for(int i=0; i<len; i++)
		printf("%d ",a[i]);
}
