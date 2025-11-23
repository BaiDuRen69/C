//定义两个变量，要求交换变量中记录的值
//注意：交换的代码写在一个新的函数中
//#include<stdio.h>
//int main()
//{
//	void exchange(int* q1,int* q2);
//	
//	int num1=4;
//	int num2=8;
//	printf("%d %d\n",num1,num2);
//	int* p1=&num1;
//	int* p2=&num2;
//	exchange(p1,p2);
//	printf("%d %d",num1,num2);
//}
//void exchange(int* q1,int* q2)
//{
//	int median=*q1;
//	*q1=*q2;
//	*q2=median;
//}





//定义一个函数，求数组的最大值和最小值，并进行返回
//#include<stdio.h>
//void juge(int arr[],int length,int* p1,int* p2);
//int main()
//{
//	int arr[]={1,5,9,7,25,0,68,14,99};
//	int length=sizeof(arr)/sizeof(int);
//	int min,max;
//	juge(arr,length,&min,&max);
//	printf("%d %d",min,max);
//}
//void juge(int arr[],int length,int* p1,int* p2)
//{
//	*p1=arr[0];
//	*p2=arr[0];
//	for(int i=1; i<length; i++)//max
//	{
//		if(*p1>arr[i])
//		{
//			*p1=arr[i];
//		}
//		if(*p2<arr[i])
//		{
//			*p2=arr[i];
//		}
//	}
//}





//利用指针将函数的结果和状态分开
//定义一个函数，将两数相除，获取他们的余数
//#include<stdio.h>
//int calculate(int num1, int num2,int* res);
//int main()
//{
//    int num1,num2;
//	scanf("%d %d", &num1, &num2);
//	int res;
//	int a=calculate(num1,num2,&res);
//	if(a)
//	{
//		printf("余数为%d",res);
//	}
//	else
//	{
//		printf("除数不能为0");
//	}
//}
//int calculate(int num1, int num2,int* res)
//{
//	if(num2==0)
//	{
//		return 0;
//	}
//	*res=num1%num2;
//	return 1;
//}





//计算二维数组的总长度，行长度，列长度并遍历
//#include<stdio.h>
//int main()
//{
//	int arr[][3]={{1,65,8},{9,1,3}};
//	int len1=sizeof(arr)/sizeof(int);//6,数组总长度
//	int len2=sizeof(arr)/sizeof(arr[0]);//2，数组行长度
//	int len3=sizeof(arr[0])/sizeof(arr[0][0]);//3，数组列长度
//    printf("%d\n",len1);
//	printf("%d\n",len2);
//	printf("%d\n",len3);
//	int(*p)[3]=arr;
//	//用指针遍历二维数组
//	for(int j=0; j<len2;j++)//j表示数组行高
//	{
//		for(int i=0; i<len3; i++)//i表示列长度
//		{
//			printf("%d\t",*(*(p+j)+i));
//			printf("%d\t",*(p[j]+i));//这个和上面的一样
//		}
//		printf("\n");
//	}
//}





//利用void指针接收其他类型数据，并交换其内容
//#include<stdio.h>
//#include<string.h>
//int swpt(void*q1, void*q2,int len);
//int main()
//{
//	int a=15;
//	int b=688;
//	printf("a=%d\tb=%d\t\n",a,b);
//	void* p1=&a;
//	void* p2=&b;
//	int len1=sizeof(int);
//	swpt(p1, p2, len1);
//	printf("a=%d\tb=%d\t\n",a,b);
//	
//	char c[20]="我是你爹";
//	char d[20]="奥利给";
//	int len2=sizeof(c);
//	printf("%s%s\n",c,d);
//	swpt(&c,&d,len2);
//	printf("%s%s\n",c,d);
//}
//int swpt(void*q1, void*q2,int len)
//{
//	char*w1=q1;
//	char*w2=q2;
//	char temp;
//	for(int i=0; i<len; i++)
//	{
//		temp=*w1;
//		*w1=*w2;
//		*w2=temp;
//		w1++;
//		w2++;
//	}
//}





//定义加、减、乘、除、四个函数,用户键盘录入三个数字(表示参与计算的数字和表示调用的函数)
//1：加法2：减法3：乘法4：除法
//#include<stdio.h>
//double add(double num1,double num2);
//double subtract(double num1,double num2);
//double multiply(double num1,double num2);
//double divide(double num1,double num2);
//int main()
//{
//	printf("加法请输入1\n减法请输入2\n乘法请输入3\n除法请输入4\n");
//	printf("请选择你要做的运算\n");
//	double choose;
//	scanf("%lf",&choose);
//	double num1,num2;
//	printf("请输入两个数\n");
//	scanf("%lf%lf",&num1,&num2);
//	if(choose==4&&num2==0)//判断除数是否为0
//	{
//		printf("除数不能为0!!!");
//		return 0;
//	}
//	//定义一个函数指针数组，将四个函数写入
//	double (*arr[])(double,double)=
//	{
//		add,subtract,multiply,divide
//	};
//	//调用函数
//    double sum=(arr[(int)choose-1])(num1,num2);
//	printf("%lf",sum);
//	return 0;
//}
//double add(double num1,double num2)
//{
//	return num1+num2;
//}
//double subtract(double num1,double num2)
//{
//	return num1-num2;
//}
//double multiply(double num1,double num2)
//{
//	return num1*num2;
//}
//double divide(double num1,double num2)
//{
//	return num1/num2;
//}
