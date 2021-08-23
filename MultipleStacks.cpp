#include<stdio.h>
#include<stdlib.h>
# define max 20
int push( int stack[max], int sno, int top[], int limit[], int *data )
{
      if( top[sno] == limit[sno] )
            return(-1);
      else
      {
            top[sno]++;
            stack[ top[sno] ] = *data;
            return(1);
      }
}
int pop( int stack[max], int sno, int top[], int bott[], int *data)
{
      if( top[sno] == bott[sno] )
            return(-1);
      else
      {
            *data = stack[ top[sno] ];
            top[sno]--;
            return(1);
      }
}
int main()
{
      int stack[max],ele, n, size, sno;
      int top[10], bott[10], limit[10];
      int i, op , reply;
      printf("How many stacks you want to enter? : ");
      scanf("%d", &n);
      size = max / n;
      bott[0] = -1;
      for(i = 1; i < n; i++)
            bott[i] = bott[i-1] + size;
      for(i = 0; i < n-1; i++)
            limit[i] = bott[i] + size;
      for(i = 0; i < n; i++)
            top[i] = bott[i];
      printf("----------------------------\n");
      printf("\tMENU");
      printf("\n----------------------------\n");
      printf("      1. PUSH\n");
      printf("      2. POP\n");
      printf("      3. EXIT\n");
      while(1)
      {
            printf("\nChoose operation : ");
            scanf("%d", &op);
            switch(op)
            {
                  case 1:
                        printf("Enter logical stack number (0 to %d) : ", n-1);
                        scanf("%d", &sno);
                        printf("\nElement to be entered in stack number %d : ",sno);
                        scanf("%d", &ele);
                        reply = push(stack, sno, top, limit, &ele);
                        if( reply == -1)
                              printf("\n Stack %d is Full", sno);
                        else
                              printf("%d is pushed in stack number %d. \n",ele, sno);
                        break;
                  case 2:
                        printf("\nEnter logical stack number (0 to %d) : ", n-1);
                        scanf("%d", &sno);
                        reply = pop( stack, sno, top, bott, &ele);
                        if( reply == -1)
                              printf("\n Stack %d is empty \n", sno);
                        else
                              printf("\n %d is popped from stack number %d \n",ele, sno);
                        break;
                  case 3 : exit(0);
                  default: printf("Invalid operation \n");
            }
      }
      return 0;
}
