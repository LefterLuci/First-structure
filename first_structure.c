#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name;
    char major;
    int age;
    double gpa;
};

int main()
{
    struct student student_electrica;
    struct student student_ac;


    student_electrica.age=33;
    student_electrica.gpa=4.5;

    printf("%f",student_electrica.gpa);
    return 0;
}
