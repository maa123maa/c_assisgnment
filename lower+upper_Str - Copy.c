//5.Write a C program to convert lowercase string to uppercase.
#include<stdio.h>
int main()
{
	int i;
	char a[10];
	scanf("%[^\n]",a);
	for (i=0;a[i];i++){
		if (a[i]>=97 && a[i]<=122){
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
}

