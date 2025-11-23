//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//程序分析：利用while语句,条件为输入的字符不为'\n'。

//第一种（利用scanf函数输入）
//#include<stdio.h>
//int main()
//{
//	char arr[100]={0};
//	scanf("%99[^\n]",arr);
//    //	"%[^\n]": 这是 scanf 的格式控制字符串，其中 %[ ] 是扫描集。
//    //	[ ]: 定义一个字符集合。
//    //	^: 这个符号在扫描集中表示 “否定” 或 “不包含”。
//    //	\n: 换行符。
//    //	组合起来 %[^\n] 的意思是：“读取所有不是换行符的字符”。
//    //指定最大读取长度：在 % 和 [ 之间加上一个数字，限制读取的字符数
//	char temp=arr[0];
//	int i=0;
//	int sum1=0,sum2=0,sum3=0,sum4=0;
//	while(temp!='\0')
//	{
//		if((temp>='a'&&temp<='z')||(temp>='A'&&temp<='Z'))
//			sum1++;
//		else if(temp==' ')
//			sum2++;
//		else if(temp>='0'&&temp<='9')
//			sum3++;
//		else
//			sum4++;
//		i++;
//		temp=arr[i];
//	}
//	printf("%d\n%d\n%d\n%d\n",sum1,sum2,sum3,sum4);
//}





//第二种（利用getchar函数）
//#include<stdio.h>
//int main()
//{
//	int temp,sum1=0,sum2=0,sum3=0,sum4=0;
//	while((temp=getchar())!='\n')
//	{
//	    if((temp>='a'&&temp<='z')||(temp>='A'&&temp<='Z'))
//			sum1++;
//		else if(temp==' ')
//			sum2++;
//		else if(temp>='0'&&temp<='9')
//			sum3++;
//		else
//			sum4++;
//	}
//	printf("%d\n%d\n%d\n%d\n",sum1,sum2,sum3,sum4);
//}
