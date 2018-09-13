#include <stdio.h>
#include <stdlib.h>

/**
 * 练习 if...else 语句。
 * 此程序用于计算税费。
 */

int main(int argc, char *argv[]) {
	float min = 39.00;
	float shares, money;
	
	printf("Enter value of trade: ");
	scanf("%f",&shares);
	
	if(shares > 0 && shares < 2500)
	{
		money = 30 + shares * 0.017;
		if(money < min)
		{
			printf("Commission: $%.2f\n", min);
		}
		else
		{
			printf("Commission: $%.2f\n", money);
		}
	}
	else if(shares >= 2500 && shares < 6250)
	{
		money = 56 + shares * 0.0066;
		printf("Commission: $%.2f\n", money);
	} 
	else if(shares >= 6250 && shares < 20000)
	{
		money = 76 + shares * 0.0034;
		printf("Commission: $%.2f\n", money);
	}
	else if(shares >= 20000 && shares < 50000)
	{
		money = 100 + shares * 0.0022;
		printf("Commission: $%.2f\n", money);
	}
	else if(shares >= 50000 && shares < 500000)
	{
		money = 155 + shares * 0.0011;
		printf("Commission: $%.2f\n", money);
	}
	else if(shares > 500000)
	{
		money = 255 + shares * 0.0009;
		printf("Commission: $%.2f\n", money);
	}
	return 0;
}
