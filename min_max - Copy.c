#include<stdio.h>
int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int a[n],max,min;
	printf("enter the element in array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for (int i=1;i<n;i++)
	{
	      if (min>a[i]){
	          min=a[i];
	      }
	      else if (max<a[i]){
	          max=a[i];
	      }
	}
	printf("%d\n",max);
	printf("%d",min);
}
