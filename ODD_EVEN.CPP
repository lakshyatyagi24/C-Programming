#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 printf("\n Enter any number: ");
 scanf("%d", &n);
 if(n%2==0)
	printf("\n Even number");
 else
	printf("\n Odd number");
 getch();
 }