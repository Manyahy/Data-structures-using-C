#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int top=-1;
int stack[MAX];
int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}
int isfull(){
    if(top==MAX-1) return 1;
    else return 0;
}
void push(int c){
    if(isfull()){
        printf("Stack is full!!");
    }
    else{
        stack[++top]=c;
    }
}
int pop(){
    int c;
    if(isEmpty()){
        printf("Stack is empty!!");
        return -1;
    }
    else{
        c=stack[top];
        top--;
        return c;
    }
}
void palindrome(char s[]){
    int pal=0;
   for(int i=0;i<strlen(s);i++){
       push(s[i]);
   }
   for(int i=0;i<strlen(s);i++){
       if(pop()!=s[i]) pal=1;
   }
   if(pal==0) printf("It is a palindrome!!");
   else printf("Not a palindrome!!");
    
}
void display(){
    if(isEmpty()) printf("Stack is Empty!!");
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int choice,x,n;
    char str[MAX];
    do{
        printf("1.push\n2.pop\n3.display,\n4.palindrome\n5.exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("\nEnter the element to be inserted:");
            scanf("%d",&x);push(x);break;
            case 2:n=pop();
            if(n!=-1)
            printf("\nPopped element is:%d",n);break;
            case 4:printf("Enter the string:");
            scanf("%s",str);palindrome(str);
            break;
            case 3:display();break;
            case 5:printf("\nExiting from the program!!");break;
            default:printf("\nInvalid choice!!");
            
        }
    }while(choice!=5);
    return 0;
}
