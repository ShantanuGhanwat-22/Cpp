#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int n;
	
	char* p;
	printf("enter number:\n");
	scanf("%d",&n);
	p=(char*)malloc(n* sizeof(char)+1);
	
	printf("enter the string");

		scanf("%s",p);
	
	 printf("given string is");
		printf("%s",p);
		

	free(p);
	
}
