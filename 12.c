#include<stdio.h>
#include<conio.h>

void main()
{
    int balance, withdrawal;
    
    clrscr();
    
    printf("Enter balance amount:\n");
    scanf("%d", &balance);
    printf("Enter wihdrawal amount:\n");
    scanf("%d", &withdrawal);
    
    if(withdrawal%100!=0)
    {
        printf("Invalid Amount.\n");
    }
    else
    {
        if(balance>=withdrawal)
        {
            printf("Transaction Successful!\n");
        }
        else
        {
            printf("Insufficient Balance.\n");
        }
    }
    
    getch();
    
}
