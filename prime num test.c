#include<stdio.h>
int main()
{
     int a,i,g;
     scanf("%d",&a);
    
     for(i=2;i<a;i++)
     {
        if(a%i==0)
        {
            g = i;
            printf("a is div by %d\n",i);
            printf("this num is not prime num\n");
        }
      
     }
     if(g ==0)
     {
        printf("this num is prime num :");
     }
     getch();
     return 0;

}
