/* 18. Write a program which takes the month number as an input and display number of
days in that month */

#include<stdio.h>
int main()
{
	int month_number;
	printf("Enter a Month number : ");
	scanf("%d",&month_number);
	if((month_number==1)||(month_number==3)||(month_number==5)||(month_number==7)||(month_number==8)||(month_number==10)||(month_number==12))
	
	{
		printf("Month has 31 days");
	}
	else if((month_number==4)||(month_number==6)||(month_number==9)||(month_number==11))       
	{
		printf("Month has 30 days");
	}
	else if(month_number==2)
	{
		printf("Month has 28/29 days");
	}
	else
	{
		printf("Invalid month_number");
	}
	return 0;
}
