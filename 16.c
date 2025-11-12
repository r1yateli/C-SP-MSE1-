#include<stdio.h>
#include<conio.h>

void main()
{
	int grades;

	clrscr();

	printf("Enter student's grades: ");
	scanf("%d", &grades);
	
	if(grades >= 90 && grades <= 100)
	{
		printf("EXCELLENT.");
	}
	else if(grades >= 75)  
	{
		printf("VERY GOOD.");
	}
	else if(grades >= 60)  
	{
		printf("GOOD.");
	}
	else if(grades >= 40)  
	{
		printf("AVERAGE.");
	}
	else  // grades < 40
	{
		printf("FAIL.");
	}
	
	getch();

}
