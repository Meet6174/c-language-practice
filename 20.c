 #include<stdio.h>
 int main()
 {
    int i=12;
    int *p;
    p=&i;
    printf("address of i = %u\n",p);
    printf("val of i = %u\n",*p);
    return 0;
 }