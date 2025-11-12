#include <stdio.h>
#include <conio.h>

void main()
{
    float income, tax;

    clrscr();

    printf("Enter Annual Income (in Lakhs): ");
    scanf("%f", &income);

    if (income <= 4)
        tax = 0;
    else if (income <= 8)
        tax = (income - 4) * 0.05;
    else if (income <= 12)
        tax = (4 * 0.05) + (income - 8) * 0.10;
    else if (income <= 16)
        tax = (4 * 0.05) + (4 * 0.10) + (income - 12) * 0.15;
    else if (income <= 20)
        tax = (4 * 0.05) + (4 * 0.10) + (4 * 0.15) + (income - 16) * 0.20;
    else if (income <= 24)
        tax = (4 * 0.05) + (4 * 0.10) + (4 * 0.15) + (4 * 0.20) + (income - 20) * 0.25;
    else
        tax = (4 * 0.05) + (4 * 0.10) + (4 * 0.15) + (4 * 0.20) + (4 * 0.25) + (income - 24) * 0.30;

    printf("Calculated Tax: ₹%f Lakhs\n", tax);

    getch();
  
}
