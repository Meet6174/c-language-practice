#include<stdio.h>
int f(int);
int f(int n)
{
    if (n==1   || n==2)
    {
        return n-1;
    }
    return f(n-1)+f(n-2);
}
int main()
{
    int a;
    a=4;
    printf("%d",f(a));
    return 0;
}