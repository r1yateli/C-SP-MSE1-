#include <stdio.h>
#include <conio.h>

void main()
{
    float x, y;

    clrscr();

    printf("Enter X coordinate: ");
    scanf("%f", &x);
    printf("Enter Y coordinate: ");
    scanf("%f", &y);

    if (x == 0 && y == 0)
        printf("Point lies at the Origin.");
    else if (x == 0)
        printf("Point lies on the Y-axis.");
    else if (y == 0)
        printf("Point lies on the X-axis.");
    else if (x > 0 && y > 0)
        printf("Point lies in the First Quadrant.");
    else if (x < 0 && y > 0)
        printf("Point lies in the Second Quadrant.");
    else if (x < 0 && y < 0)
        printf("Point lies in the Third Quadrant.");
    else
        printf("Point lies in the Fourth Quadrant.");

    getch();

}
