#include<stdio.h>
void userconcat(char* , char*);
int main()
{
char a[20] , b[20];



printf("Enter string");
scanf("%s",&a);

printf("Enter string");
scanf("%s",&b);




userconcat(a ,b);




}



void userconcat(char *p , char *q)
{
	while( *p!= '\0')
	{
		p++;
		printf("%s",*p);
		
	}
	
	while( *q != '\0')
	{
		*p = *q;
		p++;
		q++;
		printf("%s", *p);
	}
	
	*p = '\0';
	
	
}




