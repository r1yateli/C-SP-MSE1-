#include<stdio.h>
#include<conio.h>

void main()
{
	float radius, height, surfarea;
	
	clrscr();
	
	printf("Enter radius of cylinder:");
	scanf("%f",&radius);
	printf("Enter height of cylinder:");
	scanf("%f",&height);

	surfarea=2*3.14*radius*(height+radius);

	printf("The surface area of the cylinder=%f\n",surfarea);

	getch();
}
