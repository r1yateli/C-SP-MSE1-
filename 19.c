#include <stdio.h>
#include <conio.h>

void main()
{
    char vehicle, time;
    float hours, fee = 0;  

    clrscr();  
  
    printf("Enter vehicle type (c for car / b for bike / t for truck):\n");
    scanf(" %c", &vehicle);
    printf("Enter parking duration (in hours):\n");
    scanf("%f", &hours);
    printf("Enter time (d for day / n for night):\n");
    scanf(" %c", &time);

    if(vehicle == 'c' || vehicle == 'C')
    {
        if(time == 'd' || time == 'D')
            fee = 30 * hours;
        else if(time == 'n' || time == 'N')
            fee = 20 * hours;
        else
            printf("Invalid time input!\n");
    }
    else if(vehicle == 'b' || vehicle == 'B')
    {
        if(time == 'd' || time == 'D')
            fee = 15 * hours;
        else if(time == 'n' || time == 'N')
            fee = 10 * hours;
        else
            printf("Invalid time input!\n");
    }
    else if(vehicle == 't' || vehicle == 'T')
    {
        fee = 50 * hours; 
    }
    else
    {
        printf("Invalid vehicle type!\n");
    }

    if(fee > 0)   
        printf("\nParking Fee: ₹%f", fee);

    getch();  
}

                  SWITCH CASE

#include <stdio.h>
#include <conio.h>

void main()
{
    char vehicle, time;
    float hours, fee = 0;

    clrscr();

    printf("Enter vehicle type (c for car / b for bike / t for truck):\n");
    scanf(" %c", &vehicle);
    printf("Enter parking duration (in hours):\n");
    scanf("%f", &hours);
    printf("Enter time (d for day / n for night):\n");
    scanf(" %c", &time);

    switch(vehicle)
    {
        case 'c':
        case 'C':
            switch(time)
            {
                case 'd':
                case 'D':
                    fee = 30 * hours;
                    break;
                case 'n':
                case 'N':
                    fee = 20 * hours;
                    break;
                default:
                    printf("Invalid time input!\n");
            }
            break;

        case 'b':
        case 'B':
            switch(time)
            {
                case 'd':
                case 'D':
                    fee = 15 * hours;
                    break;
                case 'n':
                case 'N':
                    fee = 10 * hours;
                    break;
                default:
                    printf("Invalid time input!\n");
            }
            break;

        case 't':
        case 'T':
            fee = 50 * hours;
            break;

        default:
            printf("Invalid vehicle type!\n");
    }

    if(fee > 0)
        printf("\nParking Fee: ₹%.2f", fee);

    getch();
}


