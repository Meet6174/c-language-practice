#include<stdio.h>

#include<string.h>
struct student
{
    int rollno;
    float grade;
    char name[20];
};
int main()
{
 struct student st[100];
  st[0].rollno =56;
  st[0].grade=45.6;
  strcpy(st[0].name,"rahil");
  st[1].rollno =36;
  st[1].grade=55.6;
  strcpy(st[1].name,"kashap");
  printf("student name : %s \n grade :%f\n roll num : %d\n",st[0].name,st[0].grade,st[0].rollno);
  printf("student name : %s \n grade :%f\n roll num : %d",st[1].name,st[1].grade,st[1].rollno);
     
    return 0;
}