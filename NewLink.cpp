#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	int i,n;
	struct node *h,*p,*x;
	h=p=(node*)malloc(sizeof(struct node));
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter data: ");
	scanf("%d",&p->data);
	for(i=1;i<n;i++)
	{
		p->link=(node*)malloc(sizeof(struct node));
		p=p->link;
		printf("\nEnter data: ");
		scanf("%d",&p->data);
	}
	p->link=NULL;
	p=h;
	printf("\nElements in the Linked List:-\n");
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->link;
	}
	p=h;
	x=(node*)malloc(sizeof(struct node));
	x->link=p;
	printf("\nEnter data: ");
	scanf("%d",&x->data);
	h=x;
	p=h;
	printf("\nElements in the Linked List after insertion:-\n");
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->link;
	}
	return 0;
}
