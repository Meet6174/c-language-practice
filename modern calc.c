#include <stdio.h>
int main()
{
    char h;
    int a, b;
    printf("enter the val of a : ");
    scanf("%d", &a);
    printf("enter the val of b : ");
    scanf("%d", &b);
    printf("enter the opration which you like to do \n");
    scanf(" %c", &h); // very imp thing is that spance in front of %c is naccesory because %c is getting stuck between int and char val
                      // that is c lang properties
    int e = (int)h;
    printf("the val of e %d", e);
    switch (e)
    {
    case 43:

    {
        printf("the val of a+b = %d", a + b);
    }
    break;
    case 42:
    {
        printf("the val of a*b = %d", a * b);
    }
    break;
    case 45:
    {
        printf("the val of a-b = %d", a - b);
    }
    break;
    case 47:
    {
        printf("the val of a/b = %d", a / b);
    }
    }
    return 0;
}