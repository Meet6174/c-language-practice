#include<stdio.h>
#include<stdlib.h>
int main()
{
int n=2;
printf("enter the val of n :");
// scanf("%d",&n);
int *ptr= (int*)malloc(n*sizeof(n));
ptr[0]=1;
ptr[1]=2;
printf("%d",ptr[1]);
    return 0;
}