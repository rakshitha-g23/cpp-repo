#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
    
    
};
int flag=0;
struct node *root,*temp,*p;
struct node *new(int d)
{
    p=malloc(sizeof(struct node));
    p->left=p->right=0;
    p->data=d;
    return p;
}


void preorder(struct node *root)
{
    if(root!=0)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
}
void inorder(struct node *root)
{
    if(root!=0)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=0)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
void search(struct node *root,int key)
{
    if(root->data==key)
    {
        flag=1;
        return;
    }
    else
    {
        if(flag==0 && root->left!=0)
        {
            search(root->left,key);
            
        }
        if(flag==0 && root->right!=0)
        {
            search(root->right,key);
            
        }
    
    return;
    }
}
void main()
{
    int ch,ans=1,key;
    while(ch)
    {
        printf("1.create\n 2.traverse\n 3.search\n 4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:root=new(6);
            root->left=new(9);
            root->right=new(5);
            root->left->left=new(2);
            root->left->left->left=new(8);
            root->left->left->right=new(15);
            root->right->left=new(24);
            root->right->right=new(14);
            root->right->left->right=new(7);
            
            break;
            case 2:printf("preorder:\n");
            preorder(root);
            printf("inorder\n");
            inorder(root);
            printf("postorder:\n");
            postorder(root);
            break;
            case 3:printf("enter the key element\n");
            scanf("%d",&key);
            search(root,key);
            if(flag==1)
            printf("found\n");
            else
            printf("not found\n");
            break;
            case 4:exit(0);
            break;
            default:printf("invalid\n");
            
        }
    }
}
