// 8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
	int number;
	printf("enter a leap year number\n");
	scanf("%d",&number);
	if((number%4==0)&&(number%100!=0)||(number%400==0))
	{
		printf("%d is a leap year\n",number);
	}
	else{
		printf("%d not a leap year\n",number);
	}
	return 0;
	
}
