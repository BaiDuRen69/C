//题目：输入三个整数 x、y、z，请把这三个数由小到大输出。
//程序分析：我们想办法把最小的数放到 x 上，先将 x 与 y 进行比较，
//          如果 x>y 则将 x 与 y 的值进行交换，然后再用 x 与 z 进行比较，
//          如果 x>z 则将 x 与 z 的值进行交换，这样能使 x 最小。
#include<stdio.h>
int ex(int*a,int*b);
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
		ex(&x,&y);
	if(x>z)
		ex(&x,&z);
	if(z>y)
		ex(&z,&y);
	printf("%d %d %d",x,z,y);
}
int ex(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	return 0;
}
