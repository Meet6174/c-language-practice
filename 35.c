#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("x.txt","a");
    int num=5;
    for(int i=1;i<11;i++)
    {
        fprintf(ptr,"%d \n",num*i);
    }

    return 0;
}