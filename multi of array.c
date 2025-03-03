#include<stdio.h>
int main()
{
    int i,j,k,a,b,c;
    int x[3][3];
    int y[3][3];
    int z[3][3];
    printf("enter the elements of array 1\n");
    for(i=0;i<3;i++)
    {
        scanf("%d %d %d",&x[i][0],&x[i][1],&x[i][2]);     
    }
    printf("enter the elements of array 2\n");
    for(i=0;i<3;i++)
    {
        scanf("%d %d %d",&y[i][0],&y[i][1],&y[i][2]);     
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]= x[i][0]*y[0][j] + x[i][1]*y[1][j] + x[i][2]*y[2][j];
        }   
    }
    printf("\n \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
 return 0;    
}
