#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
	float radius, x, y, distance;

  clrscr();
	
	printf("Enter radius of circle:\n");
	scanf("%f",&radius);
	printf("Enter coordinates of point P (x, y):\n ");
  scanf("%f%f", &x, &y);
    
    distance=sqrt(x*x+y*y);
    
    if(distance<radius)
    {
        printf("Point P is INSIDE the circle.\n");
    }
    else if(distance==radius)
    {
        printf("Point P is ON the circle.\n");  
    }
    else if(distance>radius)
    {
        printf("Point P is OUTSIDE the circle.\n");
    }

    getch();
    
    } 
