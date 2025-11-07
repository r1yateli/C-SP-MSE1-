#include<stdio.h>
#include<conio.h>

void main()
{
	float radius, volume;
	
	clrscr();
	
	printf("Enter radius of hemisphere:");
	scanf("%f",&radius);

	volume=(2*3.14*radius*radius*radius)/3;

	printf("The volume of the hemisphere=%f\n",volume);

	getch();
}
