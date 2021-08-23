#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;
int l;
int c = 1;
void push(int);
void pop();
int length();
void display();
int main()
{
    int ch;
    int n;
    printf("Enter size of stack:\n");
    scanf("%d",&n);
    while(1)    
    {
        printf("Stack Operations\n\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Length\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push(n);
            break;
            case 2:
            pop();
            break;
            case 3:
            l = length();
            printf("Length = %d\n",l);
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

void push(int n)
{
    struct node *temp;
    int x = 0;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to push:\n");
    scanf("%d",&x);
    if(root==NULL)
    {
        temp->data = x;
        temp->link = NULL;
        root = temp;
    }
    else
    {
        if(c<n)
        {
            temp->data = x;
            temp->link = root;
            root = temp;
            ++c;
        }
        else
        {
            printf("Overflow\n");
        }
    }
}

void pop()
{
    struct node *temp;
    temp = root;
    if(temp==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        int val = temp->data;
        root = temp->link;
        temp->link = NULL;
        free(temp);
        printf("Value Deleted: %d\n", val);
    }
}

int length()
{
    int count = 0;
    struct node *temp;
    temp = root;
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
        printf("List is empty\n\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}