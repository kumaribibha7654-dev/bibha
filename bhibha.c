#include <stdio.h>
#include <string.h>


typedef struct employee {
    char name[20];
    int salary;
} employee;

int main() {
    employee emp1;


    printf("Enter employee records:\n");
    printf("Employee name:\t ");
    scanf("%s", emp1.name); 
    printf("Enter employee salary: ");
    scanf("%d", &emp1.salary);

    
    printf("\nEmployee name is %s\n", emp1.name);
    printf("Salary is %d\n", emp1.salary);

    return 0;
}
