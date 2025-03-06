#include<stdio.h>
int f(int,int,int);
int main()
{
    int d=6;
   
   f(d,0,1);
    return 0;
}
int f(int n,int a,int b)
{
    int c;
   
    if(n==1)
    {
        return 1;
    }
    else
    {
    c=a+b;
   
    printf("%d\n",c);
    return f(n-1,b,c);
    }

}