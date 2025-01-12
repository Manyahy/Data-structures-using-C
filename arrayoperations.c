#include<stdio.h>
#define MAX 5
int n,a[MAX];
void insert(){
    int pos,x;
    printf("Enter the element to be inserted:");
    scanf("%d",&x);
    printf("Enter the location:");
    scanf("%d",&pos);
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=x;
    n=n+1;
    
}
void Delete(){
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos>n){
        printf("Invalid location!!");
    }else{
    for(int i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    n=n-1;}
}
void Display(){
    printf("Array elements are:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    int choice;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    do{
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();break;
            case 2:Delete();break;
            case 3:Display();break;
            case 4:printf("Exiting from the program!!");break;
            default:printf("Invalid choice!!");
        }
    }while(choice!=4);
    return 0;
}
