//题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
//程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
#include<stdio.h>
int main()
{
	printf("请输入第一个字母");
	char input1,input2;
	input1=getchar();
	getchar();
	switch(input1)
	{
	case 'm':
		printf("星期一");
		break;
	case 't':
	    printf("请输入第二个字母");
		input2=getchar();
		if(input2!='u'||input2!='h')
		{
			printf("你输错了吧！！！");
			break;		
		}
		input2='u'?printf("星期二"):printf("星期四");
		break;
	case 'w':
		printf("星期三");
		break;
	case 'f':
		printf("星期五");
		break;
	case 's':
		printf("请输入第二个字母");
		input2=getchar();
		if(input2!='u'||input2!='a')
		{
			printf("你输错了吧！！！");
			break;		
		}
		input2='a'?printf("星期六"):printf("星期天");
		break;
	default:
		printf("你输错了吧！！！");
	}
}
