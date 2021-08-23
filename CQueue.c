#include <stdio.h>
#include <stdlib.h>
int CQ[5];
int front = -1;
int rear = -1;
void insert();
void del();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\nCircular Queue Operations\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: \n");
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
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}

void insert()
{
    int x;
    printf("Enter data to insert:\n");
    scanf("%d",&x);
    if(front==-1 && rear==-1)    //Condition for inserting first element
    {
        front = rear = 0;
        CQ[rear] = x;
    }
    else if((rear+1)%5==front)     //Condition when cqueue is full
    {
        printf("Queue is full\n");
    }
    else        //Condition for insertion in normal situation
    {
        rear = (rear+1)%5;
        CQ[rear] = x;
    }
}

void del()
{
    int x = 0;
    if(front==-1 && rear==-1)       //Condition for empty cqueue
    {
        printf("Circular Queue is empty");
    }
    else if(front==rear)    //Condition for deleting first element
    {
        x = CQ[front];
        front = rear = -1;
    }
    else        //Condition for deletion in normal situation
    {   
        x = CQ[front];
        front = (front+1)%5;
    }
}

void display()
{
    int i = front;
    if(front==-1 && rear==-1)
    {
        printf("Oueue is empty\n");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d ", CQ[i]);
            i = (i+1)%5;
        }
        printf("%d ",CQ[rear]);
    }
}