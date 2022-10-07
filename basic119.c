#include<stdio.h>
#include<string.h>
typedef struct Person{
char name[50];
int citNo;
float salary;
} person;
int main(){
person p1;
strcpy(p1.name, "Golden Touch-New College");
p1.citNo=1984;
p1. salary=2500;
printf("Name: %s\n", p1.name);
printf("Citizenship No.: %d\n", p1.citNo);
printf("Salary: %.2f", p1.salary);
}
