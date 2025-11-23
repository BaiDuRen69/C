//题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
//#include<stdio.h>//钻题目漏洞法
//int main()
//{
//	char a[20];
//	printf("请输入一个字符串：");
//	fgets(a, sizeof(a), stdin);
//	char b;
//	printf("请输入你要删除的字母：");
//	b=getchar();
//	int i=0;
//	while(a[i]!='\n')
//	{
//		if(a[i]!=b)
//			putchar(a[i]);
//		i++;
//	}
//}





#include<stdio.h>
int main()
{
	char a[20];
	puts("请输入一个字符串：");
	fgets(a, sizeof(a), stdin);
	char b;
	puts("请输入你要删除的字母：");
	b=getchar();
	int i=0;
	while(a[i]!='\n')
	{
		if(b==a[i])
		{
			for(int j=i; a[j]!='\n'; j++)
				a[j]=a[j+1];
		}
		i++;
	}
	puts(a);
}
