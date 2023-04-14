// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
	float number;
	printf("Enter a number : ");
	scanf("%f",&number);
	if(number>0)
	{
		printf("%.2f is positive number",number);
	}
	else if(number<0)
	{
		printf("%.2f is negative number",number);
	}
	else{
		printf("zero");
	}
	return 0;
}
