#include<stdio.h>
#include<conio.h>

void main()
{
	int credit_score;
	float annual_income, loan_amount;
	
	clrscr();
	
	printf("Enter Credit Score:\n");
	scanf("%d", &credit_score);
	printf("Enter Annual Income (in Lakhs):\n");
	scanf("%f", &annual_income);
	printf("Enter Loan Amount:\n");
	scanf("%f", &loan_amount);
	
	if(credit_score >= 800 && annual_income > 10)
	{
    printf("Interest Category:Excellent\n");
		printf("Interest Rate: 7%%");
	}
	else if(credit_score >= 700)
	{
    printf("Interest Category:Good\n");
		printf("Interest Rate: 9%%");
	}
	else if(credit_score >= 600 )
	{
    printf("Interest Category:Average\n");
		printf("Interest Rate: 11%%");
	}
	else
	{
    printf("Interest Category: Poor\n");
		printf("Loan Denied");
	}
	
	getch();
}
