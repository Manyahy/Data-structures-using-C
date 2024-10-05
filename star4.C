

#include<stdio.h>

void main()

{

int i,j,k:

clrscr();

for(i=0;i<5; i++)

{






for(j=0;j<i;j++)

{

printf(" ");

}

for(k=1;k<=5-i;k++)

{

printf("*");

}

printf("\n");
}