#include<stdio.h>
int f(int);
int f(n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return f(n-1)*n;
}
int main()
{
   int  a=4;
    printf("%d",f(a));
    return 0;
}