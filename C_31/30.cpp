//题目：将一个数组逆序输出。
//程序分析：用第一个与最后一个交换。
#include<stdio.h>
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9};
	int len=sizeof(a)/sizeof(int);
	for(int i=0; i<len; i++)
		printf("%d ",a[i]);
	printf("\n");
	int temp;
	for(int i=0; i<len-i-1; i++)
	{
		temp=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=temp;
	}
	for(int i=0; i<len; i++)
		printf("%d ",a[i]);
}





//#include <stdio.h>
//int main(int argc, char *argv[])
//{
//	int i,num,a[10]={0,1,2,3,4,5,6,7,8};
//	for(i=8;i>=0;i--){
//		printf("%d ",a[i]);
//	}
//	return 0;
//}
