#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *getnewnode(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node *insert(struct node *root, int d)
{
    //if root is empty
    if(root==NULL)
    {
        root = getnewnode(d);
    }
    else if(d <= root->data)
    {
        root->left = insert(root->left, d);
    }
    else
    {
        root->right = insert(root->right, d);
    }
    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d -> ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d -> ",root->data);
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
        printf("%d -> ",root->data);
    }
}

int search(struct node *root, int d)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(d==root->data)
    {
        return 1;
    }
    else if(d < root->data)
    {
        return search(root->left, d);
    }
    else
    {
        return search(root->right, d);
    }
}

struct node *minNode(struct node *root)
{
    struct node *curr = root;
    while(curr && curr->left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
}

struct node *del(struct node *root, int d)
{
    if(root==NULL)
    {
        return root;
    }
    if(d < root->data)
    {
        root->left = del(root->left, d);
    }
    else if(d > root->data)
    {
        root->right = del(root->right, d);
    }
    else
    {
        if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minNode(root->right);
        root->data = temp->data;
        root->right = del(root->right, temp->data);
    }
    return root;
}

int main()
{
    struct node* root = NULL;
    int ch, d;
    while(1)
    {
        printf("\n Binary Search Tree operations \n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Search a node\n");
        printf("4. Preorder Traversal\n");
        printf("5. Inorder Traversal\n");
        printf("6. Postorder Traversal\n");
        printf("7. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter data to insert:\n");
            scanf("%d", &d);
            root = insert(root, d);
            break;
            case 2:
            printf("Enter data to be deleted:\n");
            scanf("%d",&d);
            root = del(root, d);
            break;
            case 3:
            printf("Enter data to search:\n");
            scanf("%d", &d);
            if(search(root, d)!=NULL)
            {
                printf("Found\n");
            }
            else
            {
                printf("Not Found\n");
            }
            break;
            case 4:
            preorder(root);
            break;
            case 5:
            inorder(root);
            break;
            case 6:
            postorder(root);
            break;
            case 7:
            exit(0);
            default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}