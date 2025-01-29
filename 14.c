#include<stdio.h>
int main()
{
    char ch ;
    int a,b;
    printf("enter the val of a : ");
    scanf("%d",&a);
    printf("enter the val of b : ");
    scanf("%d",&b);
    printf("enter the opration which you like to do ");
    scanf("%c",&ch);
        switch(ch)
        {
            case 43:
            {
                printf("the val of a+b = %d",a+b);
            }
        }
    return 0;
}