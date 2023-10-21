#include<stdio.h>
void ustrcpy()
int main(){
	char a[5]="pune";
	char b[5];
	ustrcpy (b,a);
	printf("target string is %s",b);
}
void ustrcpy (char*q, char*p)
{
	while (*p!='\0'){
		*q=*p;
		p++;
		q++
	}
	*q='\0';
}
