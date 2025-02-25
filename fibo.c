#include<stdio.h>
int main()
{
    int a,b,c;
    b = 1;
    a=0;
    for(int i=0;i<9;i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d.\n",c);
    }
    
    return 0;
}