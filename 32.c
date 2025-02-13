#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("x.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("%d",num);
    fclose(ptr);
    return 0;
}