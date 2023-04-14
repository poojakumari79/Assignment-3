/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

#include<stdio.h>
int main()
{
	int english,maths,physics,chymistry,physical_education,total_marks,marks_percentage;
	printf("Enter marks of English:");
	scanf("%d",&english);
	printf("Enter marks of Maths:");
	scanf("%d",&maths);
	printf("Enter marks of Physics:");
	scanf("%d",&physics);
	printf("Enter marks of Chymistry:");
	scanf("%d",&chymistry);
	printf("Enter marks of physical_education:");
	scanf("%d",&physical_education);
	total_marks=english+maths+physics+chymistry+physical_education;
	printf("total marks = %d\n",total_marks);
	marks_percentage=(total_marks*100)/500;
	printf("percentage = %d%%\n",marks_percentage);
	if(marks_percentage<33)
	{
	printf("candidate failed");
}
else{
	printf("candidate passed");
}
	
	return 0;
	
}

