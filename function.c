#include<stdio.h>
int c(int,int);
void e();
int main()
{
    int a,b,d;
    a=10;
    b=2;
    e();
    d =c(a,b);
    printf("%d",d);

    return 0;
}
int c(int x,int y)
{
    printf("the sum is %d\n",x+y);
    return x+y;
}
void e()
    {
        printf("good morning");
    }
