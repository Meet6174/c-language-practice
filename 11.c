#include<stdio.h>
int s(int);
int main()
{
    int a,b;
    scanf("%d",&a);
    s(a);
    
    return 0;
}
int s(int n)
{
    if(n>1)
    {
        if(n%2==0)
        {
            printf("%d",n);
            return s(n/2);
        }
        else
        {   
            printf("%d",n);
            return s(3*n+1);
        }
    }
    else
    {
        printf("1");
        return 1;
    }

}
