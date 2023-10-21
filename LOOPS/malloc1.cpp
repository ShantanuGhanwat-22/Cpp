#include<stdio.h>
#include<stdlib.h>


int main(){
	int * ptr;
	int i, sum=0;
	
	ptr = (int*)malloc(5*sizeof(int));
	
	printf("Accept the value\n");
	for( i =0; i<5; i++)
	{
		scanf("%d",(ptr+i));
		sum = sum+ptr[i];
	}
	
	printf("%d\n", sum);
	free(ptr);
	
}
