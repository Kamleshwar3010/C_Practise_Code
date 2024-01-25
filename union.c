#include <stdio.h>
#include <string.h>

int main()
{
    union emplyoee
    {
        int age;
        char name[50];
        float salary;
        char department[30];
    } emp;
    printf("%d\n", sizeof(union emplyoee)); // print size of biggest data type in union which is char array of name
    // print every detail
    // strcpy(emp.name, "Kamleshwar");
    // puts(emp.name);
    // strcpy(emp.department, "IT");
    // puts(emp.department);
    // emp.age = 29;
    // printf("%d\n", emp.age);
    // emp.salary = 10000000;
    // printf("%.2f\n", emp.salary);

    // print only salary since union share memory address so oldest value of union is override by latest value
    //  strcpy(emp.name, "Kamleshwar");
    //  strcpy(emp.department, "IT");
    //  emp.age = 29;
    //  emp.salary = 10000000;
    //  puts(emp.name);
    //  puts(emp.department);
    //  printf("%d\n", emp.age);
    //  printf("%.2f\n", emp.salary);

    // another way to use union member
    union emplyoee emp1;
    emp1.age = 500;
    // printf("%d", emp1.age);

    return 0;
}
