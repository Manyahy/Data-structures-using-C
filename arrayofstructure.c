#include<stdio.h>
#define MAX 5
struct customer{
    char name[10];
    int accn;
    float balance;
}c[MAX];
void printlow(struct customer c[],int n){
     printf("\nCustomers with low balance:");
     for(int i=0;i<n;i++){
         if(c[i].balance<200){
             printf("\n%s",c[i].name);
         }
    
}}
void printhigh(struct customer c[],int n){
     printf("\nCustomers with high balance and their updated balance:");
     for(int i=0;i<n;i++){
         if(c[i].balance>1000){
             c[i].balance+=100;
             printf("\nUpdated balance of %s is:%.2f",c[i].name,c[i].balance);
         }
     }
}
         
int main(){
    int n;
    printf("Enter the number of customers:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the name of the customer %d:",i+1);
        scanf("%s",c[i].name);
        printf("Enter the account number  of the customer %d:",i+1);
        scanf("%d",&c[i].accn);
        printf("Enter the balance of the customer %d:",i+1);
        scanf("%f",&c[i].balance);
    }
    printlow(c,n);
    printhigh(c,n);
    return 0;
}
