//Compile using the following command: 
//gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 

#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void) {
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * PhoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double SalaryToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is not found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    //VV CODE I ADDED VV
    //match examples
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if (matchPtr != NULL)
        printf("Employee with phone number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with phone number 909-555-1235 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if (matchPtr != NULL)
        printf("Employee with a salary of $6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with a salary of $6.34 is NOT found in the record\n");

    //no match examples
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "626-123-1234");
    if (matchPtr != NULL)
        printf("Employee with phone number 626-123-1234 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with phone number 626-123-1234 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 5.10);
    if (matchPtr != NULL)
        printf("Employee with a salary of $5.10 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with a salary of $5.10 is NOT found in the record\n");

    return EXIT_SUCCESS;
}