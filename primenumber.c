#include<conio.h>

#include<stdio.h>

void main()

{

int a,i,k=0;

clrscr();

printf("Enter the number:");

scanf("%d",&a);

for(i=2;i<=a/2;i++)

{

if (a%i==0)

{

k=1;

break;

}

}

if (k==0&&a>1)

printf("number is prime number");

else

printf("number is not a prime number");

getch();