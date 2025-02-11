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
  struct student st1,student2;
  st1.rollno =56;
  st1.grade=45.6;
  strcpy(st1.name,"rahil");
  student2.rollno =36;
  student2.grade=55.6;
  strcpy(student2.name,"kashap");
  printf("student name : %s \n grade :%f\n roll num : %d\n",st1.name,st1.grade,st1.rollno);
     printf("student name : %s \n grade :%f\n roll num : %d",student2.name,student2.grade,student2.rollno);
     
    return 0;
}