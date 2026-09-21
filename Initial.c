#include <stdio.h>

#define MAX_EMPLOYEES 4

typedef struct {
    char name[32];
    double salary;
} Employee;

double calculateTotal(Employee employees[], int count) {
    double total = 0.0;

    for (int i = 0; i < count; i++) {
        total += employees[i].salary;
    }

    return total;
}

void printReport(Employee employees[], int count) {
    printf("Employee Report\n");
    printf("===============\n");

    for (int i = 0; i < count; i++) {
        printf("%s | $%.2f\n", employees[i].name, employees[i].salary);
    }

    printf("===============\n");
    printf("Total Payroll: $%.2f\n", calculateTotal(employees, count));
}

int main() {
    Employee employees[MAX_EMPLOYEES] = {
        {"Alice", 4200.50},
        {"Brian", 3850.00},
        {"Clara", 5100.75},
        {"David", 3995.25}
    };

    printReport(employees, MAX_EMPLOYEES);

    return 0;
}