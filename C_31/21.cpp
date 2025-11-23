//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>
void exchang()
{
	char a;
	if((a=getchar())!='\n')
		exchang();
//	if(a!='\n')
		putchar(a);
}
int main()
{
	exchang();
}





//#include <stdio.h>
//void f()
//{
//	char ch;
//	if((ch=getchar())!='\n') {
//		f();
//	}
//	if(ch!='\n') {
//		printf("%c",ch);
//	}
//}
//int main()
//{
//	printf("请输入字符: ");
//	f();
//}
