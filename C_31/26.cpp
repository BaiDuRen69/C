//题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
#include<stdio.h>
#include<string.h>
void reverse(char*a)
{
	int len=strlen(a);//计算字符串长度
	char temp;
	for(int i=0; i<len-i-1; i++)//字符串反转
	{
		temp=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=temp;
	}
}
int main()
{
	char a[]="www.runoob.com";
	reverse(a);
	puts(a);
}
