//需求：键盘录入5个数据并存入数组，完成以下需求
//1）遍历数组
//2）反转数组
//3）再次遍历
//#include<stdio.h>
//int main()
//{
//	int a[5]={0};
//	int length=sizeof(a)/sizeof(int);
//	printf("请输入5个数:");
//	for(int i=0; i<length; i++)//录入5个数据并存入数组
//	{
//		scanf("%d",&a[i]);
//	}
//	for(int j=0; j<(length-j-1); j++)//反转数组
//	{
//		int median=a[j];
//		a[j]=a[length-j-1];
//		a[length-j-1]=median;
//	}
//    for(int k=0; k<length; k++)//再次遍历
//	{
//		printf("%d ",a[k]);
//	}
//}






//需求：定义一个数组，存入1~5。要求打乱数组中所有数据的顺序
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	int a[]={1,2,3,4,5};
//	int length=sizeof(a)/sizeof(int);
//	srand(time(NULL));
//	for(int i=0; i<length; i++)
//	{
//		int random=rand()%5+0;
//		int median=a[i];
//		a[i]=a[random];
//		a[random]=median;
//	}
//	for(int j=0; j<length; j++)
//	{
//		printf("%d ",a[j]);
//	}
//}





//数组的基本查找（顺序查找）
//#include<stdio.h>
//int main()
//{
//	int a[]={5,48,4,55,1,54,58,12,15,66};
//	int number=77;
//	int length=sizeof(a)/sizeof(int);
//	int end=0;
//	for(int i=0; i<length; i++)
//	{
//		if(number==a[i])
//		{
//			end=i;
//		}
//	}
//	if(end)
//	{
//		printf("%d",end);
//	}
//	else
//	{
//		printf("no");
//	}
//	
//}





//二分查找
//#include<stdio.h>
//int judge(int a[], int length,int number);
//int main()
//{
//	int a[]={1,2,3,4,5,6,7,8,9,10,11};
//	int number=13;
//	int length=sizeof(a)/sizeof(int);
//	int sum=judge(a,length,number);
//	if(sum)
//	{
//		printf("第%d索引为该数字",sum);
//	}
//	else
//	{
//		printf("这个数组中没有该数字");
//	}
//}
//int judge(int a[], int length,int number)
//{
//	int max=length-1;
//	int min=0;
//	for(int i=0; min<=max; i++)
//	{
//		int median=(max+min)/2;
//		if(a[median]==a[i])
//		{
//			return median;
//		}
//		else if(a[median]<number)
//		{
//			min=median+1;
//		}
//		else
//		{
//			max=median-1;
//		}
//	}
//	return 0;
//}





//冒泡排序：相邻的数据两两比较，小的放前面，大的放后面。
//#include<stdio.h>
//int main()
//{
//	int arr[]={31,5,52,1,4,0,9};
//	int length=sizeof(arr)/sizeof(int);
//	for(int j=1; j<length; j++)//进行length-1次循坏
//	{
//		for(int i=0; i<length-j; i++)//相邻的数据两两比较，小的放前面，大的放后面。
//		{
//			if(arr[i]>arr[i+1])
//			{
//				int median=arr[i];
//				arr[i]=arr[i+1];
//				arr[i+1]=median;
//			}
//		}
//	}
//	for(int j=0; j<length; j++)
//	{
//		printf("%d ",arr[j]);
//	}
//}





//选择排序：从0索引开始，拿着每一个索引上的元素跟后面的元素依次比较，小的放前面，大的放后面，以此类推。
//#include<stdio.h>
//int main()
//{
//	int arr[]={4,2,9,1,0,7,45,51};
//	int length=sizeof(arr)/sizeof(int);
//	
//	for(int i=0; i<length-1; i++)
//	{
//		for(int j=i+1; j<length; j++)
//		{
//		    if(arr[i]>arr[j])
//			{
//		    int median=arr[i];
//			arr[i]=arr[j];
//			arr[j]=median;
//			}
//		}
//	}
//	for(int i=0; i<length; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
