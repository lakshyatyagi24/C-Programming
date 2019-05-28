#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int a, b, temp;
 printf("\n Enter first number: ");
 scanf("%d", &a);
 printf("\n Enter second number: ");
 scanf("%d", &b);
 temp=a;
 a=b;
 b=temp;
 printf("\n After swapping\n First number is: %d", a);
 printf("\n Second number is: %d", b);
 getch();
 }