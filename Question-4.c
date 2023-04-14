/* 4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include<stdio.h>
int main()
{
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if((number&1)==1)
	printf("number is odd");
	
	else
	printf("number is even");
	return 0;
	
	
}
