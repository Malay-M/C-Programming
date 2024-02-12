#include<stdio.h>

struct Employee
{
    int age;
    int salary;
};
typedef struct Employee Employee;
typedef int sonkha;
int main()
{
    Employee emp1={30,50000}, emp2={32,45000};
    printf("Details of employee 1: age: %d ,salary: %d\n",emp1.age,emp1.salary);
    printf("Details of employee 1: age: %d ,salary: %d\n",emp2.age,emp2.salary);

    sonkha i=10; //Here sonkha works as a int because of typedef
    printf("%d\n",i);
}