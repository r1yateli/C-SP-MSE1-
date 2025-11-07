#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
	float radius, sideofsq, areaofsq, areaofcircle, reqdarea;

  clrscr();

	printf("Enter radius of circle:\n");
	scanf("%f",&radius);

	sideofsq=2*radius;
	areaofsq=sideofsq*sideofsq;
	areaofcircle=3.14*radius*radius;
	reqdarea=areaofsq-areaofcircle;

	printf("The area not covered by circle is %f\n",reqdarea);

  getch();

}
