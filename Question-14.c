// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number :");
	scanf("%d",&number);
	if((number%7==0)||(number%3==0))
	{
		printf("%d is divisible by 7 or 3");
	}
	else{
		printf("%d is not divisible by 7 or 3");
	}
	return 0;
}
