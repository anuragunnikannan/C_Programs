#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root;
int l;
void insert();
void del();
int length();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\nQueue Operations\n\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Length\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            break;
            case 3:
            l = length();
            printf("Length: %d",l);
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid Choice");
        }
    }
    return 0;
}

void insert()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert:\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->link!=NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void del()
{
    struct node *temp;
    temp = root;
    if(temp==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int val = temp->data;

        root = temp->link;
        temp->link = NULL;
        free(temp);
        printf("Value deleted: %d\n",val);
    }
}

int length()
{
    int count = 0;
    struct node* temp = root;
    while(temp!=NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

void display()
{
    struct node *temp = root;
    if(temp==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }   
}