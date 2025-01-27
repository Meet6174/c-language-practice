#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=0;
    c = a;
    a = b;
    b = c;
    printf("the val of a %d.\n",a);
    printf("the val of b %d.\n",b);
    return 0;
}