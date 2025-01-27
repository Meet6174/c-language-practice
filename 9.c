#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<20;i++)
    {
        printf("*\n");
        for(j=0;j<i;j++)
        {
            printf("-");
        }
    }
    return 0;
}
