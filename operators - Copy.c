/*
#include<stdio.h>
int main()
{
	int a,num,rem,rev=0;
	scanf("%d",&a);
	num=a;
	while(a!=0){
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	if (num==rev){
		printf("it is palindrome: %d",num);
	}
	else{
		printf("it is non palindrome.....");
	}
	return 0;
	
}
*/
/*
#include<stdio.h>
int main(){
	int a,original,remainder,rev=0;
	scanf("%d",&a);
	original=a;
	while(a!=0)
	{
		remainder=a%10;
		rev=remainder*remainder*remainder + rev;
		a/=10;
	}
	if(original=rev)
	{
		printf("this is armstrong number");
	}
	else
{
	printf("this is non armstrong number");
}}
*/
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for ( int i=2;i<a;i++){
		if(a%i==0){
			printf("it is not a prime number ");
		}
		else{
			printf("it is a prime number");
		}
	}
	return 0;
	
}



