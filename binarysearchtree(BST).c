#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newno(int ele){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
    
}
void preorder(struct node *root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
         preorder(root->right);
        
    }
}
void inorder(struct node *root){
    if(root!=NULL){
        
        inorder(root->left);
        printf("%d",root->data);
         inorder(root->right);
        
    }
}
void postorder(struct node *root){
    if(root!=NULL){
        
        postorder(root->left);
         postorder(root->right);
         printf("%d",root->data);
        
    }
}
struct node *insert(struct node *root,int ele){
    if(root==NULL){
        printf("Insertion successfull!!");
        return newno(ele);
    }
    if(root->data>ele){
        root->left=insert(root->left,ele);
    }
    else if(root->data<ele){
        root->right=insert(root->right,ele);
    }
    return root;
}
struct node *search(struct node *root,int ele){
    if(root==NULL||root->data==ele){
        return root;
    }
    if(root->data>ele){
        return search(root->left,ele);
    }
    return search(root->right,ele);
}
int main(){
    int choice,val,x;
    struct node *root=NULL;
    do{
        printf("\n1.Insertion\n2,Preorder\n3.Inorder\n4.Postorder\n5.Search\n6.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the element to be isnserted:");
            scanf("%d",&x);
            root=insert(root,x);
            break;
            case 2:
            if(root==NULL){
                printf("BST is empty!!");
            }
            else{
                printf("\nElements of the tree are(preorder-traversal:");
                preorder(root);
            }
            break;
            case 3:
            if(root==NULL){
                printf("BST is empty!!");
            }
            else{
                printf("\nElements of the tree are(inorder-traversal:");
                inorder(root);
            }
            break;
            case 4:
            if(root==NULL){
                printf("BST is empty!!");
            }
            else{
                printf("\nElements of the tree are(postorder-traversal:");
                postorder(root);
            }
            break;
            case 5:
            printf("\nEnter the element to be searched:");
            scanf("%d",&val);
            if(search(root,val)){
                printf("Element found!!");
            }
            else
            printf("\nElement not found!!");
            break;
            case 6:
            printf("Exiting from the program!!");
            default:printf("Invalid choice!!");
        }
    }while(choice!=6);
    return 0;
}
