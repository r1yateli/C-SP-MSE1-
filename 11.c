#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;
    
    clrscr();
    
    printf("Enter three sides of a triagle:\n");
    scanf("%d%d%d", &a, &b, &c);
    
    if((a+b>c) && (b+c>a) && (a+c>b))
    {
        if((a==b) && (b==c))
        {
            printf("It is an Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c)
        {

            printf("It is an Isosceles triangle.\n");
        }
        else
        {
            printf("It is a Scalene triangle.\n");
        }
    }
    else 
    {
        printf("The given sides do not form a valid triangle.\n");
    }
    
    getch();
  
}
