// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
	char character;
	printf("Enter a character : ");
	scanf("%c",&character);
	if((character>='A')&&(character<='Z'))
	{
		printf("upper_case.");
	}
	else if((character>='a')&&(character<='z'))
	{
		printf("lower_case.");
	}
	return 0;
}
