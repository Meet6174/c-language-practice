#include<stdio.h>
int a(int);
int main()
{ int c,d;
c=10;
  d = a(c);
   printf("1,%d\n",c);
       printf("3.%d\n",d);
    return 0;
}
int a(int b)
{
    b=50;
    printf("2,%d\n",b);
    return b;
}