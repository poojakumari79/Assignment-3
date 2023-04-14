/* 17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the length of the first sides a :");
	scanf("%d",&a);
	printf("Enter the length of the second sides b :");
	scanf("%d",&b);
	printf("Enter the length of the third sides c :");
	scanf("%d",&c);
	if((a+b==c)||(b+c==a)||(c+a==b))
	{
		printf("triangle is valid");
	}
	else{
		printf("triangle is not valid");
	}
	return 0;
}
