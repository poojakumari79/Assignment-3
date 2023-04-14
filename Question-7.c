/* 7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots */

#include<stdio.h>
int main()
{
	float discriminant,a,b,c;
	printf("enter a number a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	discriminant=(b*b)-4*a*c;
	if(discriminant==0)
	{
		printf("Roots are equal");
	}
	else if(discriminant>0)
	{
		printf("Roots are real and distinct");
	}
	else if(discriminant<0)
	{
		printf("Roots are imaginary");
	}
	return 0;
}
