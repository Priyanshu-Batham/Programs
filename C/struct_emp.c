/*C program to read and print an Employee’s Details using Structure - In this program, we will read employee’s details like name, employee id and salary using structure and then print the entered values.*/

#include <stdio.h>
#include <stdlib.h>

int empDetails()
{
    struct employees{
        int emp_id;
        char emp_name[20];
        char dept[10];
        float sal;
    } emp;
    
    printf("Enter the Employee id: ");
    scanf("%d", &emp.emp_id);
    printf("Enter the Name of employee no. %d: ", emp.emp_id);
    scanf("%s", &emp.emp_name);
    printf("Enter the department: ");
    scanf("%s", &emp.dept);
    printf("Enter the salary: ");
    scanf("%f", &emp.sal);

    printf("Employee ID: %d\nEmployee Name:%s\nDepartment:%s\nSalary:%f", emp.emp_id, emp.emp_name, emp.dept,  emp.sal);
    return 0;
}

int main()
{
    /*int num;
    printf("Enter the number of employees:");
    scanf("%d", &num);*/
    empDetails();
}