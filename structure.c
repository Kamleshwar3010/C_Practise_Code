#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        char name[50];
        int roll_no;
        int age;
    } stu;
    printf("%d\n", sizeof(struct student)); // print size of structure which is 60

    stu.age = 100;
    stu.roll_no = 10;
    strcpy(stu.name, "Kamleshwar");
    // printf("%c\n", stu.name[0]); // print k
    // puts(stu.name); // print kamleshwar
    // printf("%d\n%d\n", stu.age, stu.roll_no);
    struct student stu1; // another way to  use value of structure value
    stu1.roll_no = 11;
    //  printf("%d\n%d", stu.roll_no, stu1.roll_no);
    // struct student *st = &stu.age;
    // printf("%d", st); //print address of stu.age
    // printf("%d", *st); // print value of stu.age
    // printf("%d", stu1.age); // print zero  as we not assign any value to it
    return 0;
}
