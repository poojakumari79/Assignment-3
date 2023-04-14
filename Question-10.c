/* 10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage. */

#include<stdio.h>
int main()
{
	float selling_price,cost_price,profit,loss;
	printf("Enter selling_price :\n");
	scanf("%f",&selling_price);
	printf("Enter cost_price :\n");
	scanf("%f",&cost_price);
	if(selling_price>cost_price)
	{
		profit=(selling_price-cost_price);
		printf("profit = %.2fRs \n",profit);
		profit=(profit/cost_price)*100;
		printf("profit in percentage = %.2f%%\n",profit);
	}
	else if(cost_price>selling_price)
	{
		loss=(cost_price-selling_price);
		printf("Loss = %.2fRs\n ",loss);
		loss=(loss/cost_price)*100;
		printf("Loss in percentage =%.2f%%\n",loss);
	}
	else
	{
		printf("No profit No loss.");
	}
	return 0;
}

