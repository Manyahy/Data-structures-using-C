#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
char stack [MAX];
char infix [MAX], postfix [MAX];
int top = -1;
int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
void  push(char c){
    if(top==MAX-1){
        printf("Stack overflow!!");
        return;
    }
    else{
        stack[++top]=c;
    }
}
char pop(){
    char c;
    if(top==-1){
        printf("Stack underflow!!");
        exit(1);
        
    }
    else{
        c=stack[top];
        top--;
        return c;
    }
}
void print(){
    int k=0;
    for(int i=0;i<strlen(postfix);i++){
        if(postfix[i]=='('){
        k=1;
        break;
        }
    }
    if(k==1){
       printf("Invalid expression:unbalanced parenthesis!!");
    }
    else{
     printf("Postfix expression is:");
         for(int i=0;i<strlen(postfix);i++){
             printf("%c",postfix[i]);
    }}
}
           
   
   


int precedence (char symbol)
{
switch(symbol)
{

case'^':
return 3;
case '/':
case '*':
return 2;
case '+':
case '-':
return 1;
default:
return 0;
}
}
void inToPost( ) {
int i, j=0;
char symbol, next;
for(i=0; i<strlen(infix); i++) {
symbol = infix[i];
switch( symbol ) {
case '(':
push(symbol);
break;
case')':
while((next=pop( )) != '(')
postfix[j++] = next;
break;
case '+':
case '-':
case '*':
case '/':
case '^':
while(!isEmpty() && precedence (stack [top]) >= precedence(symbol))
postfix[j++]=pop();
push(symbol);
break;
default:
postfix[j++] = symbol;
}
}
while(!isEmpty()){

postfix[j++]=pop();
}
postfix[j]='\0';
}
void validate(char infix[]){
    for(int i=0;i<strlen(infix);i++){
        char c=infix[i];
        if(!isalnum(c) &&c!='('&&c!=')'&&!isdigit(c)&&c!='+'&&c!='-'&&c!='*'&&c!='/'&&c!='%'&&c!='^'){
        printf("Invalid characters in infix!!");
        exit(1);}
    }
}

int main()
{

printf("Enter the infix expression: ");
scanf("%s",infix);
validate(infix);

inToPost();
print();
return 0;
}
