#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    printf("enetr your string : ");
    scanf("%s",x);
    int n=strlen(x);
    for(int i=0;i<=n;i++)
    {
        if(x[i]<64 && x[i]>32)
        {
            printf("%c",x[i]);
        }
        else
        {
            printf("%c",x[n-i-1]);
        }
    }
    return 0;
}