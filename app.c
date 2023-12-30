#include<stdio.h>
#include<string.h>
int main()
{	
	//Taking string from the user
	char str[100];
	printf("Enter the string value that you want to be reversed\n");
	scanf("%s",str);
	printf("The entered string is: %s\n", str);
	
	//Calculating the length of the string 
	int len = strlen(str);
	
	//Defining the for loop for swapping
	for(int i = 0, j = len-1; i <= j; i++, j--)
	{ 
		//swap the characters
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	
	printf("The reversed string is : %s\n", str);
	return 0;
	
}

