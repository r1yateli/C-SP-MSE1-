#include <stdio.h>
#include <conio.h>

void main()
{
    float amount, discount, final_amount;

    clrscr();

    printf("Enter Total Purchase Amount (in ₹): ");
    scanf("%f", &amount);

    if (amount < 1000)
        discount = 0;
    else if (amount <= 5000)
        discount = amount * 0.05;
    else if (amount <= 10000)
        discount = amount * 0.10;
    else
        discount = amount * 0.20;

    final_amount = amount - discount;
  
    printf("Discount Applied: ₹%f\n", discount);
    printf("Final Amount: ₹%f\n", final_amount);
    
    getch();
  
}
