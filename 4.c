#include <stdio.h>
#include<conio.h>

void main()
{
    int numofdays, years, months, days;

    clrscr();

    printf("Enter number of days:\n");
    scanf("%d",&numofdays);
    
    years=numofdays/365;
    months=(numofdays%365)/30;
    days=(numofdays%365)%30;
    
    printf("%d is  %d years, %d months, %d days.\n",numofdays,years,months,days);

    getch();
    
}
