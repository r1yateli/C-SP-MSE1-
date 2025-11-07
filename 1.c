#include<stdio.h>
#include<conio.h>

void main()
{
    float radius, area, perimeter;
    
    clrscr();

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    
    printf("Area of Circle      : %f square units\n", area);
    printf("Perimeter of Circle : %f units\n", perimeter);
     
    getch();  
}
