#include<stdio.h>
#include<conio.h>

void main()
{
	int units;
	float bill;

	clrscr();

	printf("Enter number of units consumed:\n");
	scanf("%d", &units);
	
	if(units<=100)
	{
	    bill=units*2;
	}
	else if (units<=300)
	{
	    bill=100*2+(units-100)*3;
	}
	else if(units<=500)
	{
	    bill=100*2+200*3+(units-300)*5;
	}
	else
	{
	    bill=100*2+200*3+200*5+(units-500)*8;
	}
	
	printf("The electricity bill is %f for %d units.\n", bill,units);
    
	getch();

}
