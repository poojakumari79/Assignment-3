/* 16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character. */

#include<stdio.h>
int main()
{
	int character,digits,special_character='$';
	if((character>=65)&&(character<=90))
	{
		printf("upper_case");
	}
	else if((character>=97)&&(character<=122))
	{
		printf("lower_case");
	}
	else if((digits>=48)&&(digits<=57))
	{
		printf("digit number ");
	}
	else if((special_character>=32)&&(special_character<=47))
	{
		printf("special character");
	}
	return 0;
	
}
