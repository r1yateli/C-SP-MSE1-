#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, c, max_ab, max_abc;

  clrscr();
	
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	max_ab=a*(a>=b)+b*(b>a);
	max_abc=max_ab*(max_ab>=c)+c*(c>max_ab);
	
	printf("The largest of %d,%d,%d is%d\n",a,b,c,max_abc);

  getch();
	
}
