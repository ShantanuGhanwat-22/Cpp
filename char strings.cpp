#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	char* p;
	printf("enter no. of characters",n);
	scanf("%d",&n);
	p=(char*)malloc(n*sizeof(char)+1);
	printf("accept string",p);
	scanf("%s",p);
	printf("%s",p);
	free(p);
}
