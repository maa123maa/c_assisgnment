#include<stdio.h>
int main ()
{
	int n,c=1,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>=c)
	{
		sum=sum+c;
		c=c+2;	
	}
	printf("the sum of odd numbers %d\n",sum);
	return 0;
}
