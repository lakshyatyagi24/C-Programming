#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int year;
 printf("\n Enter any year: ");
 scanf("%d", &year);
 if(year%400==0)
	printf("%d is a leap year", year);
 else if(year%100==0)
	printf("%d is not a leap year", year);
 else if(year%4==0)
	printf("%d is a leap year", year);
 else
	printf("%d is not a leap year", year);
 getch();
 }