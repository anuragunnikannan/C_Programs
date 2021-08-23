#include <stdio.h>
int main()
{
    int amt;
    printf("Enter amount: \n");
    scanf("%d",&amt);
    int n2000 = 0, n500 = 0, n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    int b = amt;
    if(b>=2000)
    {
        n2000 = b/2000;
        b = b - n2000*2000;
    }
    if(b>=500)
    {
        n500 = b/500;
        b = b - n500*500;
    }
    if(b>=200)
    {
        n200 = b/200;
        b = b - n200*200;
    }
    if(b>=100)
    {
        n100 = b/100;
        b = b - n100*100;
    }
    if(b>=50)
    {
        n50 = b/50;
        b = b - n50*50;
    }
    if(b>=20)
    {
        n20 = b/20;
        b = b - n20*20;
    }
    if(b>=10)
    {
        n10 = b/10;
        b = b - n10*10;
    }
    if(b>=5)
    {
        n5 = b/5;
        b = b - n5*5;
    }
    if(b>=2)
    {
        n2 = b/2;
        b = b - n2*2;
    }
    if(b>=1)
    {
        n1 = b;
    }
    int t = n2000+n500+n200+n100+n50+n20+n10+n5+n2+n1;
    printf("Notes: \n");
    printf("Rs 2000: %d \n",n2000);
    printf("Rs 500: %d \n",n500);
    printf("Rs 200: %d \n",n200);
    printf("Rs 100: %d \n",n100);
    printf("Rs 50: %d \n",n50);
    printf("Rs 20: %d \n",n20);
    printf("Rs 10: %d \n",n10);
    printf("Rs 5: %d \n",n5);
    printf("Rs 2: %d \n",n2);
    printf("Re 1: %d \n",n1);
    printf("Total Notes: %d",t);
    return 0;
}
