#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int year, month, day, noday;
 printf("\n Enter the total days: ");
 scanf("%d", &noday);
 year=noday/365;
 month=(noday%365)/7;
 day=(noday%365)%7;
 printf("%d year %d week %d days", year, month, day);
 getch();
 }