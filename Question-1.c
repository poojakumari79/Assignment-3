// 1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main()
{
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if(number>0)
	printf("number is positive");
	else if(number<0)
	printf("number is negative");
	else
	printf("number is zero");
	return 0;
}
