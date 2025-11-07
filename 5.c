#include <stdio.h>
#include <conio.h>

void main()
{
	int rupees, num500, num200, num100, num50, num20, num10, num5, num2, num1;

  clrscr();
  
	printf("Enter number of rupees:\n");
	scanf("%d",&rupees);

	num500=rupees/500;
	rupees=rupees%500;

	num200=(rupees)/200;
	rupees=rupees%200;

	num100=rupees/100;
	rupees=rupees%100;

	num50=rupees/50;
	rupees=rupees%50;

	num20=rupees/20;
	rupees=rupees%20;

	num10=rupees/10;
	rupees=rupees%10;

	num5=rupees/5;
	rupees=rupees%5;

	num2=rupees/2;
	rupees=rupees%2;

	num1=rupees;

	printf("Notes of 500:%d\n",num500);
	printf("Notes of 200:%d\n",num200);
	printf("Notes of 100:%d\n",num100);
	printf("Notes of 50 :%d\n",num50);
	printf("Notes of 20 :%d\n",num20);
	printf("Notes of 10 :%d\n",num10);
	printf("Notes of 5  :%d\n",num5);
	printf("Notes of 2  :%d\n",num2);
	printf("Notes of 1  :%d\n",num1);

  getch();

}
