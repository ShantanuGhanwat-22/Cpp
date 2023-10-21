
#include<iostream>
#include <string.h>
using namespace std;


int main()
{
	char init[] = "this is init";
	char add[] = " added now";

	
	strcat(init, add);

	cout << init << endl;

	return 0;
}

