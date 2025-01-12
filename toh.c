#include<stdio.h>
void toh(int n,char from,char to,char aux){
    if(n>0){
        toh(n-1,from,aux,to);
        printf("\nMove the disc %d from [%c] to [%c]",n,from,to);
        toh(n-1,aux,to,from);
    }
}
int main(){
    int n;
    char A,B,C;
    printf("Enter the number of discs:");
    scanf("%d",&n);
    toh(n,'A','C','B');
    return 0;
}
