// Online C compiler to run C program online
#include <stdio.h>
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main() {
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a=%d and b=%d",a,b);

    return 0;
}
