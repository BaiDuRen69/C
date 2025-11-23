//题目：求一个3*3矩阵对角线元素之和
//程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。
#include<stdio.h>
int main()
{
	int a[3][3],sum=0;
	printf("请输入矩阵(3*3)：\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0; i<3; i++)
		sum+=a[i][i];
	printf("对角线之和为：%d",sum);
}
