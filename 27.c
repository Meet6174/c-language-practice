#include<stdio.h>
#include<string.h>
int main()
{
    int n;
char st[]="abc";
char st1[10];
strcpy(st1,st);
strcat(st1,st);
printf("%s %s",st,st1);
n = strcmp(st,st1);
printf("\n %d",n);

    return 0;
}