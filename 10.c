#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, smallestnum;
    
    clrscr();
    
    printf("Enter three integers:\n");
    scanf("%d%d%d", &a, &b, &c);
    
    smallestnum = (a<b) ? ((a<c)?a:c) : ((b<c)?b:c);
   
    printf("The smallest of all three integers is %d.\n", smallestnum);
    
    getch();
}
