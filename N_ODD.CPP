#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 printf("\n Enter any number: ");
 scanf("%d", &n);
 printf("\n Odd numbers between 1-%d are: ", n);
 for(int i=1; i<=n; i++)
 {
  if(i%2!=0)
	printf("%d ", i);
  }
 getch();
 }