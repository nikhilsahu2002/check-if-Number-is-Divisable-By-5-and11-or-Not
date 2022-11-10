#include<stdio.h>
#include<conio.h>
void main()
{
int a ;
clrscr();
printf("Enter the nuber");
scanf("%d",&a);
if (a%5==0 && a%11==0)
printf("nuber is dividable");
else
printf("Not");
getch();
}