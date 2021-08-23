#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;

int length()
{
    struct node *temp = root;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->right;
    }
    return count;
}

void insert_end()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data:\n");
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->right!=NULL)
        {
            p = p->right;
        }
        p->right = temp;    //right connection of (n-1)th node
        temp->left = p;     //left connection of nth node
    }
}

void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data:\n");
    scanf("%d",&temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        temp->right = root;
        root->left = temp;  //right connection
        root = temp;        //left connection
    }
}

void insert_any()
{
    struct node *temp, *p;
    int loc, len;
    len = length();
    printf("Enter location:\n");
    scanf("%d",&loc);
    if(loc>len)
    {
        printf("Invalid Location\n");
        printf("List contains %d nodes\n",len);
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data:\n");
        scanf("%d",&temp->data);
        temp->left = NULL;
        temp->right = NULL;
        p = root;
        int i = 1;
        while(i<loc)
        {
            p = p->right;
            i++;
        }
        temp->right = p->right;
        p->right->left =  temp;
        temp->left = p;
        p->right = temp; 
    }
}

void display()
{
    struct node *temp = root;
    if(temp==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp = temp->right;
        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n\n1. Insert at End\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at any position\n");
        printf("4. Length\n");
        printf("5. Display\n");
        printf("6. Quit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert_end();
            break;
            case 2:
            insert_begin();
            break;
            case 3:
            insert_any();
            break;
            case 4:
            printf("Length: %d\n",length());
            break;
            case 5:
            display();
            break;
            case 6:
            exit(1);
            break;
            default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}