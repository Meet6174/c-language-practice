#include<stdio.h>
int main()
{
    float a,b;
    int c;
    printf("enter val of a.\n");
    scanf("%f",&a);
    printf("enter val of b.\n");
    scanf("%f",&b);
    printf("please press 1 for get sum of a and b.\n ");     
    printf("please press 2 for get subtract of a and b.\n");
    printf("please press 3 for get multiplication of and b.\n ");
    printf("please press 4 for divide a to b.\n");
    scanf("%d", &c);
    if(c==1)
    {
        printf("the sum of a+b is %f",a+b);
    }
    if(c==2)
    {
        printf("a-b = %f",a-b);
    }
    if(c==3)
    {
        printf(" the val of a into b = %f",a*b);
    }
    if(c==4)
    {
        if(b!=0)     
        {
            printf("the val of a/b = %f",a/b);

        }
        else
        {
            printf("the denominator can't be a zero please give the input again");

        }
       
    }
    return 0;

}
