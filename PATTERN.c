#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int fact=1;
	while(a>1){	// 5* 4 *3 *2
		fact=fact*a;
		--a;
	}
	printf("%d",fact);
}
