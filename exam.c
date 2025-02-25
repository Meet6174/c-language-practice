#include<stdio.h>
int a(int);
int main()
{ int c=10;
a(c);
   printf("1,%d\n",c);
       printf("3.%d\n",a(c));
    return 0;
}
int a(int b)
{
    b=50;
    printf("2,%d\n",b);
    return b;
}