//需求：键盘录入一个字符串，使用程序实现在控制台遍历该字符串
#include<stdio.h>
int main()
{
	char a[100];
	char* p=a;
	scanf("%s",a);
	printf("%s\n",p);
	while(1)
	{
		char c=*p++;
		printf("%c\n",c);
		if(c=='\0')
		{
			break;
		}
	}
}





//需求：定义一个数组存储5个学生的名字并进行遍历
//#include<stdio.h>
//int main()
//{
//	char a[5][100];
//	int len=sizeof(a)/sizeof(char[100]);
//	printf("%d\n",len);
//	for(int i=0; i<len; i++)
//	{
//		scanf("%s",a[i]);
//	}
//	for(int i=0; i<len; i++)
//	{
//		printf("%s\n",a[i]);
//	}
//}





//string常用函数
//strlen：获取字符串的长度
//strcat：拼接两个字符串
//strcpy：复制字符串
//strcmp：比较两个字符串
//strlwr：将字符串变成小写
//strupr：将字符串变成大写
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100]="我是你爹";
//	printf("%lld\n",strlen(a));//获取字符串的长度
//	char b[100]="奥利给";
//	printf("%s\n",strcat(a,b));//拼接两个字符串
//	printf("%s\n",a);
//	printf("%d\n",strcmp(a,b));
//	printf("%s\n",strcpy(a,b));//复制字符串
//	printf("%s\n",a);
//	char c[100]="daJGIGih54";
//	printf("%s",strlwr(c));
//}





//用户登录
//需求：已知正确的用户名和密码，请用程序实现模拟用户登录。
//总共给三次机会，登录之后，给出相应的提示
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char rightname[100]="zhangsan";
//	char rightpassword[100]="123456";
//	printf("请输入用户名和密码:\n");
//	char inputname[100],inputpassword[100];
//	for(int i=1; i<=3; i++)
//	{
//		scanf("%s%s",inputname,inputpassword);
//		if(!(strcmp(rightname,inputname)&&strcmp(rightpassword,inputpassword)))
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			if(i==3)
//			{
//				printf("账户被锁定");
//				break;
//			}
//			printf("登录失败,你还有%d次机会\n",3-i);
//		}
//	}
//}





//统计字符次数
//键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数（不考虑其他字符）
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char input[100];
//	scanf("%s",input);
//	int len=strlen(input);
//	int count=0,count0=0, counta=0, countA=0;
//	for(int i=0; i<len; i++)
//	{
//		char temp=input[i];
//		printf("%c ",temp);
//		char a='a',z='z',A='A',Z='Z';
//		if(temp>=a&&temp<=z)
//		{
//			counta++;
//		}
//		else if(temp>=A&&temp<=Z)
//		{
//			countA++;
//		}
//		else if(temp>='0'&&temp<='9')
//		{
//			count0++;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	printf("\n大写字母：%d\n小写字母：%d\n数字：%d\n其他：%d\n",countA,counta,count0,count);
//
//}
