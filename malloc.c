#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,sum=0;
	int* p;
	printf("enter no. of elements");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n;i++)
	sum=sum + *(p+i);
	printf("summation is %d",sum);
	free(p);
}
