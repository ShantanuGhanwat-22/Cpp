#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,sum=0;
	int* p;
	printf("enter no. of elements");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("display");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n;i++)

	printf("%d\t",*(p+i));
	free(p);
}
