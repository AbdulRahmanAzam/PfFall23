/*
Creator : Abdul Rahman Azam\
Date: 21-nov-2023
Desciption: make date struct and give day, month, and year
*/

#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int hoursOfWork;
};

void increaseSalary(struct Employee *employee) {
    if (employee->hoursOfWork >= 8 && employee->hoursOfWork < 10) {
        employee->salary += 50.0;
    } else if (employee->hoursOfWork >= 10 && employee->hoursOfWork < 12) {
        employee->salary += 100.0;
    } else if (employee->hoursOfWork >= 12) {
        employee->salary += 150.0;
    }
}

int main() {
    const int numEmployees = 10;
    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);

        printf("Enter hours of work per day for employee %d: ", i + 1);
        scanf("%d", &employees[i].hoursOfWork);
    }

    for (int i = 0; i < numEmployees; i++) {
        increaseSalary(&employees[i]);
    }

    printf("\nEmployee Names and Final Salaries:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%s: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
