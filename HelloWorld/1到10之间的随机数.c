//1到10之间的随机数
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{	
   srand(time(NULL));	
   int num=rand()%11+0;	
   printf("%d\n",num);	
	return 0;
}




//10个1到10之间的随机数
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	srand(time(NULL));
//	for(int i=1; i<=10; i++)
//	{	
//		int num=rand()%11+0;
//		printf("%d\n",num);
//	}
//}





//10个1到100之间的随机数求和
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	srand(time(NULL));
//	int a[10];
//	for(int i=0; i<10; i++)   //取10个1到100之间的随机数
//	{
//		int d=rand()%101+1;
//		a[i]=d;               //输入数组
//	}
//	printf("\n");
//	int sum=0;
//	for(int j=0; j<10; j++)
//	{
//	    sum+=a[j];            //数组求和
//		printf("%d ",a[j]);   //数组的遍历
//	}
//	printf("\nsum=%d",sum);   //输出总和
//}





/*需求：生成10个1~100之间的随机数存入数组，要求数据不能重复
1）求出所有数据的和
2）求所有数据的平均数
3）统计有多少个数据比平均值小*/
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int judge(int a[], int length, int number1);//声明函数
//int main()
//{
//	int a[10]={0};
//	srand(time(NULL));
//	int length=sizeof(a)/sizeof(int);//求数组长度，方便代值
//	for(int i=0; i<length; )
//	{
//		int number1=rand()%100+1;//获取随机数
//		int number2=judge(a, length, number1);//调用函数，判断是否有重复
//		if(number2==1)
//		{
//			a[i]=number1;
//			i++;//确保每一个数组元素都被赋值
//		}
//	}
//	int sum1=0;
//	for(int k=0; k<length; k++)//求总和
//	{
//		sum1+=a[k];
//		printf("%d ",a[k]);
//	}
//	printf("\n这些数的和为%d",sum1);
//	double average=(double)sum1/length;//求平均数
//	printf("\n平均数为%f",average);
//	int sum2=0;
//	for(int o=0; o<length; o++)//判断数组中有几个数小于平均数
//	{
//		if(a[o]<average)
//		{
//			sum2++;
//		}
//	}
//    printf("\n有%d个数比平均值小",sum2);//输出最后结果
//}	
//int judge(int a[], int length, int number1)
//{
//	for(int j=0; j<length; j++)//遍历数组，判断是否重复
//	{
//		if(number1==a[j])
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
