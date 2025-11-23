//结构体练习
//定义一个结构体表示学生
//学生的属性有：姓名、年龄
//要求：把三个学生信息放入到数组当中，并遍历数组
//#include<stdio.h>
//typedef struct student
//{
//	char name;
//	char age;
//}ST;
//int main()
//{
//	struct student st1={'a',15};
//	ST st2={'b',16};
//	ST st3={'c',18};
//	ST st[]={st1,st2,st3};
//	for(int i=0; i<3; i++)
//	{
//	    ST temp=st[i];
//		printf("%c %d\n",temp.name,temp.age);
//	}
//}





//    结构体作为函数参数
//定义一个结构体表示学生
//学生的属性：姓名、年龄
//要求：定义一个函数，修改学生中的数据
//#include<stdio.h>
//typedef struct 
//{
//	char name;
//	int age;
//}ST;
//void modify(ST*p);
//int main()
//{
//	ST st={'a',18};
//	printf("你当前的姓名为：%c\n年龄为：%d\n",st.name,st.age);
//	modify(&st);
//    printf("你当前的姓名为：%c\n年龄为：%d\n",st.name,st.age);
//}
//void modify(ST* p)
//{
//	printf("请输入你要修改的姓名和年龄\n");
//	scanf("%c %d",&(*p).name,&(*p).age);
//}





//结构体嵌套
//定义一个结构体表示学生Student
//Student成员如下：
//名字、年龄、身高、联系方式
//联系方式Message也是一个结构体，成员如下：
//手机号、电子邮箱
//#include<stdio.h>
//typedef struct
//{
//	char phone[12];
//	char mail[100];
//}message;
//typedef struct
//{
//	char name;
//	int age;
//	double high;
//	message way;
//}ST;
//int main()
//{
//	ST st1;
//	scanf("%c %d %lf %s %s",&st1.name,&st1.age,&st1.high,st1.way.phone,st1.way.mail);
//	printf("%c %d %.2lf %s %s",st1.name,st1.age,st1.high,st1.way.phone,st1.way.mail);
//}





//           投票选举
//某班级组织野外郊游，想要在ABCD四个景点选择其中一个。
//现在班上有80名同学进行投票，找出投票数最多的景点
//Ps：
//   学生投票，用随机数模拟
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//typedef struct
//{
//	char spot;
//	int ticket;
//}C;
//int main()
//{
//	srand(time(NULL));
//	C arr[4]={{'A',0},{'B',0},{'C',0},{'D',0}}; 
//	for(int i=0; i<80; i++)
//	{
//		int a=rand()%4;
//		arr[a].ticket++;
//	}
//	for(int j=0; j<4; j++)
//	{
//		printf("%c:%d\n",arr[j].spot,arr[j].ticket);
//	}
//	int max=arr[0].ticket;
//	for(int i=1; i<4; i++)
//	{
//		if(max<arr[i].ticket)
//		{
//			max=arr[i].ticket;
//		}
//	}
//	for(int j=0; j<4; j++)
//	{
//		if(max==arr[j].ticket)
//		{
//			printf("最后选择%c",arr[j].spot);
//			break;
//		}
//	}
//}
