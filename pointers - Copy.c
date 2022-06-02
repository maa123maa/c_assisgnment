//changing the value of the variable without using its value.
#include<stdio.h>
int main()
{
	int x=10, *ptr,**ptr1;
	ptr=&x;
	**ptr1=*ptr;
	printf("%d",**ptr1);
	
}
