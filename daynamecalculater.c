#include<stdio.h>
int main()
{
    float date,month,year,a,d,e;
    date=4;
    month=9;
    year=2001;
    a=month*30.416666 + date + year*365;
    int c=(int)a;
   int b=c%7;   
    switch(b)
    {
        case 0:
        {
            printf("friday");
        }
        break;
         case 1:
        {
            printf("saturday");
        }
        break;
         case 2:
        {
            printf("sunday");
        }
        break;
         case 3:
        {
            printf("monday");
        }
        break;
         case 4:
        {
            printf("tuesday");
        }
        break;
         case 5:
        {
            printf("wednesday");
        }
        break;
         case 6:
        {
            printf("thursday");
        }
    }
    return 0;

}