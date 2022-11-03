#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data, -1 for no node\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    
    }
    newnode->data=x;
    newnode->left=0;
    newnode->right=0;
    printf("enter the left child of %d",x);
    newnode->left=create();
    printf("enter the right child of %d",x);
    newnode->right=create();
    return newnode;

}
void searchnode(struct node *temp,int value)
{
    int flag=0;
    struct node *temp;
    temp=root;
    if(root==NULL)
    printf("tree is empty\n");
    else{
        if(temp->data==value)
        {
            flag=1;
            return;
        }
        if(flag==0 && temp->left!=NULL)
        searchnode(temp->left,value);
        if(flag==0 && temp->right!=NULL)
        searchnode(temp->right,value);
    }
        if(flag==1)
        printf("element found\n");
    
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}


void postorder(struct node *root){
    
    if(root!=NULL)
    {
        
        postorder(root->left);
        postorder(root->right);
                printf("%d",root->data);

        
    }
}
void inorder(struct node *root){
        if(root!=NULL)
    {
        
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
                

        
    }

}

void main()
{
    int choice,ele;
    while(choice)
    {
        printf("1.insert\n 2.search\n 3.preorder\n 4.postorder\n 5.inorder\n 6.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:root=create();
            break;
            case 2:printf("ENTER THE ELEMNT TO BE SEARCH\n");
            scanf("%d",&ele);
            searchnode(root,ele);
            break;
            case 3:preorder(root);
            break;
            case 4:postorder(root);
            break;
            case 5:inorder(root);
            break;
            case 6:exit(0);
            break;
            default:printf("invalid input\n");
        }
    }
}