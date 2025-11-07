#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
	float x1, x2, y1, y2, m, angle;

  clrscr();
	
	  printf("Enter coordinates of point P1 (x1, y1): ");
    scanf("%f%f", &x1, &y1);
    printf("Enter coordinates of point P2 (x2, y2): ");
    scanf("%f%f", &x2, &y2);
    
    if(x1==x2)
    {
        printf("The line is vertical. Inclination angle = 90 degrees.\n");
    }
    else if(y2 == y1)
    {
        printf("The line is horizontal. Inclination angle = 0 degrees.\n");
    } 
    else
    {
        m=(y2-y1)/(x2-x1);
        angle=atan(m)*(180/3.14);
        
        if (angle<0)
        {
            angle=angle+180;
        }
        printf("Inclination angle:%f\n",angle);

        getch();
    }    
