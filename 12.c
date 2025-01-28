#include<stdio.h>
int main()
{
     int a,i;
     scanf("%d",&a);
     printf("if there is no output that means the number choosen by you is prime number ");
     for(i=2;i<a;i++)
     {
        if(a%i==0)
        {
            printf("a is div by %d\n",i);
            printf("this num is not prime num\n");
        }
      
     }
     return 0;

}