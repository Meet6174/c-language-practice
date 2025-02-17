#include<stdio.h>
int main()
{ 
    FILE *ptr;
    ptr=fopen("x.txt","r");
    char c;
    while(1)
    {
        c=fgetc(ptr);
        printf("%c",c);
        if(c==EOF)
        {
            break;
        }
    }
    return 0;
}