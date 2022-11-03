#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
    
    
};
int flag=0;
struct node *new,*root,*temp;
struct node *create()
{
    new=malloc(sizeof(struct node));
    new->left=new->right=0;
    return new;
}
void insert(struct node *root,struct node *temp)
{
    if(root->data>temp->data)
    {
        if(root->left==0)
        root->left=temp;
        else 
        insert(root->left,temp);
        
    }
    if(root->data<temp->data)
    {
        if(root->right==0)
        root->right=temp;
        else
        insert(root->right,temp);
    }
    
}
void preorder(struct node *root)
{
    if(root!=0)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
}
void inorder(struct node *root)
{
    if(root!=0)
    {
        inorder(root->left);
        printf("%d",root->data);
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
            case 1:do{new=create();
                printf("enter the data\n");
            scanf("%d",&new->data);
                if(root==0)
                root=new;
                else
                insert(root,new);
                printf("do you want to continue 1 for yes 0 for no");
                scanf("%d",&ans);
                
                
            }while(ans);
            break;
            case 2:printf("preorder:");
            preorder(root);
            printf("inorder\n");
            inorder(root);
            printf("postorder:");
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
