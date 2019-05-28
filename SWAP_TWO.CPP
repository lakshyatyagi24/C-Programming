#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int a, b;
 printf("\n Enter first number: ");
 scanf("%d", &a);
 printf("\n Enter second number: ");
 scanf("%d", &b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n After Swapping\n First number is: %d", a);
 printf("\n Second number is: %d", b);
 getch();
 }