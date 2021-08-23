#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char infix[100];
char postfix[100];
char stack[100];
int top = -1;
void push(char x)
{
    if(top<100)
    {
        top++;
        stack[top] = x;
    }
    else
    {
        printf("Stack Overflow\n");
    }
}

int pop()
{
    int v = 0;
    if(top < 0)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        v = stack[top];
        top = top-1;
    }
    return v;
}

int isoperator(char x)
{
    if(x=='^'||x=='/'||x=='*'||x=='+'||x=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char x)
{
    if(x=='^')
    {
        return 3;
    }
    else if(x=='/'||x=='*')
    {
        return 2;
    }
    else if(x=='+'||x=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void convert()
{
    int i = 0, j = 0;
    char x;
    push('(');  //pushing first bracket into the stack
    strcat(infix, ")"); //concatenating the bracket at the end of the infix
    while(infix[i]!='\0')
    {
        if(infix[i]=='(')
        {
            push(infix[i]); //pushing brackets to stack if found
        }
        else if(isdigit(infix[i]) || isalpha(infix[i]))
        {
            postfix[j++] = infix[i];    //inserting the variables or numbers into postfix expression
        }
        else if(isoperator(infix[i])==1)
        {
            x = pop();  //pop the operator in the stack for checking the precedence with the current operator
            while(isoperator(x)==1 && precedence(x) > precedence(infix[i])) 
            {
                postfix[j++] = x;
                x = pop();  //pop the operator from the stack having higher precedence
            }
            push(x);    //pushing back the operator if the loop condition fails
            push(infix[i]); //pushing current operator to stack
        }
        else if(infix[i]==')')
        {
            x = pop();  //keep deleting the operators from stack until it reaches first element i.e. '('
            while(x!='(')
            {
                postfix[j++] = x;
                x = pop();  //deleting the operators from stack until it reaches first element i.e. '('
            }
        }
        else
        {
            printf("Invalid Expression\n");
            exit(1);
        }
        i++;
    }
    if(top > 0) //Checking if any element is left in stack. If anything left, it must be invalid
    {
        printf("Invalid Expression\n");
        exit(1);
    }
}
int main()
{
    printf("Enter infix expression:\n");
    scanf("%s",&infix);
    convert();
    printf("%s",postfix);
    return 0;
}
