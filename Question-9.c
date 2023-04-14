/* 9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times. */

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
	printf("%d is greatest number\n",a);	
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is greater number\n",b);
	}
	else if((a==b)||(b==c)||(a==c))
	{
		printf("greatest number is repeated\n");
	}
	else{
		printf("%d is greater number",c);
	}
	
	return 0;
}
