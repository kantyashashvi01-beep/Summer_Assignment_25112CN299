#include <stdio.h>

int main() {
    int empId, basicSalary;
    float hra, da, grossSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Basic Salary: ");
    scanf("%d", &basicSalary);

    hra = basicSalary * 0.20;   // 20% HRA
    da  = basicSalary * 0.10;   // 10% DA

    grossSalary = basicSalary + hra + da;

    printf("\n===== SALARY DETAILS =====\n");
    printf("Employee ID   : %d\n", empId);
    printf("Basic Salary  : %.2f\n", (float)basicSalary);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", grossSalary);

    return 0;
}