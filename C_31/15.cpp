//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//    再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include<stdio.h>
int main()
{
	double sum=100;
	int j=1;
	for(double i=100; i>0; i/=2)
	{
		if(j<10)
		    sum+=i;
		if(j==11)
			printf("第10次反弹高%f\n",i);
		j++;
	}
	printf("它在第10次落地时，共经过%f米",sum);
}
