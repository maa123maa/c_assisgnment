//6.Write a C program to convert uppercase string to lowercase.
#include<stdio.h>
int main()
{
	int i;
	char a[100];
	scanf("%[^\n]");
	for (i=0;a[i];i++){
		if (a[i]>=65 && a[i]<=90){
			a[i]=a[i]+32;
		}
		
	}
	printf("%s",a);
}

