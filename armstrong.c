#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,num;
    for (num=0;num<999;num++)
    {
    a = num%100;
    b= a%10;
    c = (num-a)/100;
    d = (a-b)/10;
    f = b*b*b + c*c*c + d*d*d; 
    if(num == f)
    {
        printf("%d is armstrong number.\n",num);
    }  
    } 
    return 0;
}
