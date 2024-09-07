#include <stdio.h>

int main() {
    int empId, deptNo;
    char designationCode;

    printf("Enter Employee Id: ");
    scanf("%d", &empId);

    printf("Enter Department No(10,20,30,40): ");
    scanf("%d", &deptNo);

    printf("Enter Designation Code(m,S,s,c): ");
    scanf(" %c", &designationCode);

    char* deptName;
    char* designation;

    switch (deptNo) {
        case 10:
            deptName = "Marketing";
            break;
        case 20:
            deptName = "Management";
            break;
        case 30:
            deptName = "Sales";
            break;
        case 40:
            deptName = "Designing";
            break;
        default:
            printf("Invalid Department No.\n");
            return 1;
    }

    switch (designationCode) {
        case 'm':
            designation = "Manager";
            break;
        case 'S':
            designation = "Supervisor";
            break;
        case 's':
            designation = "Security Officer";
            break;
        case 'c':
            designation = "Clerk";
            break;
        default:
            printf("Invalid Designation Code.\n");
            return 1;
    }

    printf("Employee with employee id %d is working in \"%s\" department as \"%s\".\n", empId, deptName, designation);

    return 0;
}
