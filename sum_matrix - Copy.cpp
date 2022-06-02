#include<stdio.h>
int main(){
	int n=3,n1=3;
	
	int a[n][n1],sum=0;
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n1;j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
    {
    	
    	for(int j=0;j<n1;j++){
		if(i<=j){
			printf(" %d ",a[i][j]);
		}
		else{
			printf(" 0 ");
			sum=sum+a[i][j];
		}
		}
		printf("\n");
	}
	printf("%d",sum);
	
	/*
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n1;j++){
		printf("the transpose :")
		printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
	*/
	
	/*
	for(int j=0;j<n1;j++)
    {    sum =0;
    	for(int i=0;i<n;i++){
		sum=sum+a[i][j];
		}
		printf(" the sum of the column : %d\n",sum);
	}
	*/
	
	/*
	diagonal element
	for(int i =0;i<n;i++)
    {
    	for(int j=0;j<n1;j++){
    		if (i==j){
		printf(" %d ",a[i][j]);
	}
		
		else if(i+j==n1-1){
			printf(" %d ",a[i][j]);
		}
		else{
			a[i][j]=0;
			printf("%d",a[i][j]);
		}
	}
		printf("\n");
	}
	*/
	
	
	
}
