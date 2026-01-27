//Program to use pointers in structures

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};
int main() {
   struct Student s;
   struct Student *ptr;
   
   ptr=&s;
   
   printf("Enter roll no.:");
   scanf("%d",&ptr->roll);
   
   printf("Enter name:");
   scanf("%s",&ptr->name);
   
   printf("Enter marks:");
   scanf("%f",&ptr->marks);
   
   printf("Roll no.:%d\nName:%s\nMarks:%.2f",ptr->roll,ptr->name,ptr->marks);
   
    return 0;
}
