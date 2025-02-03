#include<stdio.h>
int main()
{
    int i=12;
    int *p=&i;
    int **j=&p;
    printf("address of i =%u\n",p);
    printf("adress of p = %u\n",j);
    printf("val of i = %u %u\n",*p,**j);
    printf("val of p = %u\n",*j);
    printf("\n");




    return 0;
}