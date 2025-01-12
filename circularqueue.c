#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int r=-1,f=-1;
int cq[MAX];
void enqueue(){
    int x;
    if((r+1)%MAX==f){
        printf("Overflow!!");
    }
    else{
        if(f==-1) f=0;
        printf("Enter the element to inserted:");
        scanf("%d",&x);
        r=(r+1)%MAX;
        cq[r]=x;
        
    }
}
void dequeue(){
    if(f==-1){
        printf(" underflow!!");
    }
    else{
        printf("Deleted item is:%d",cq[f]);
        if(f==r) f=r=-1;
        else f=(f+1)%MAX;
    }
}
void display(){
    int i=f;
    if(f==-1){
        printf("Queue underflow!!");
    }
    else{
        printf("Circular queue elements are:");
        while(i!=r){
            printf("%d\t",cq[i]);
            i=(i+1)%MAX;
        }
        printf("%d",cq[r]);
}}
int main(){
    int choice;
    do{
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:enqueue();break;
            case 2:dequeue();break;
            case 3:display();break;
            case 4:printf("Exiting from the program!!");break;
            default:printf("Invalid choice!!");
        }
    }while(choice!=4);
    return 0;
}
