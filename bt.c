/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *right,*left;
};
int flag=0;struct node *root;
struct node* new(int d)
{
    struct node*p=malloc(sizeof(struct node));
    p->data=d;
    p->left=p->right=NULL;
    return p;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d-->",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
       
        postorder(root->left);
        postorder(root->right);
         printf("%d-->",root->data);
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
      
        inorder(root->left);
         printf("%d-->",root->data);
        inorder(root->right);
    }
}
void search(struct node* temp,int key)
{ 
    if(temp->data==key)
    {
        
        flag=1;
      return;
    }
    
    else
    { 
    if(flag==0&&temp->left!=NULL)
    {
        search(temp->left,key);
    }
    if(flag==0&&temp->right!=NULL)
    {
        search(temp->right,key);
    }
    return;
    }
   
   
}
 
int main()
{ 
    int choice;
    int key;
    while(1)
    {  printf("\nMENU---\n1.create\n2.traverse\n3.search\n4.exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
    root=new(6);
    root->left=new(9);
    root->right=new(5);
    root->left->left=new(2);
    root->left->left->left=new(8);
    root->left->left->right=new(15);
    root->right->left=new(24);
    root->right->right=new(14);
    root->right->left->right=new(7);
    break;
   case 2: printf("Preoder:");
    preorder(root);
    printf("\nInorder:");
    inorder(root);
    printf("\nPostorder:");
    postorder(root);
    break;
    case 3:printf("\nEnter the key:");
    scanf("%d",&key);
    search(root,key);
    if(flag==1)
    printf("Element found!");
    else
    printf("Element not found!!");
    break;
    case 4:exit(0);
    default:printf("Invalid!!!");

    }
    }
return 0;

}
