// 5. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if((number>99)&&(number<1000)||(number<-99)&&(number>-1000))
	{
	
	printf("%d  is a three digit number",number);
	}
	else
	{
		printf("%d  not a three digit number",number);
		
	}
	return 0;
}

