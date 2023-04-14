/* 6. Write a program to print greater between two numbers. Print one number if both are
the same. */

#include<stdio.h>
int main()
{
	int number_1,number_2;
	printf("enter a number_1 and number_2\n");
	scanf("%d%d",&number_1,&number_2);
	if(number_1==number_2)
	printf("%d , both are equal",number_1);
	 else if(number_1>number_2)
	printf("%d is greater then %d",number_1,number_2);
	else
	printf("%d is greater then %d",number_2,number_1);
	return 0;
}

