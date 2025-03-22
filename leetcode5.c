#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,n,m,i;
    int x[100],y[100],z[100];
    printf("enter size of array 1 : ");
    scanf("%d",&n);
    printf("\n enter the elements :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    a+=x[i];
    }
    printf("enter size of array 2 : ");
    scanf("%d",&m);
    printf("\n enter the elements :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&y[i]);
        b+=y[i];
    }
    c=a+b;
    i=0;
 while(c>0)
 {
    z[i]=c%10;
    c=c/10;
    i++;
 }
for(;i>=0;i--)
{
    printf("%d ",z[i]);
}
    return 0;
}