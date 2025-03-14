#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the val of a :\n");
    scanf("%d",&a);
    printf("enter the val of b :\n");
    scanf("%d",&b);
    c=0;
    c = a;
    a = b;
    b = c;
    printf("after the swaping of val \n");
    printf("the val of a %d.\n",a);
    printf("the val of b %d.\n",b);
    return 0;
}
