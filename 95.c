/*
95. WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER 
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN 
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND 
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.
*/
#include <stdio.h>
#include<string.h>

// Define the structure for Employee
struct Employee {
    int empNumber;          // Employee number
    char name[50];          // Employee name
    float basicPay;         // Employee basic pay
};

int main() {
    int N;  // Number of employees
    struct Employee employ[50];  // Array of 50 Employees
    struct Employee *empPtr;  // Pointer to Employee structure

    // Ask the user how many employees' details to input
    printf("Enter the number of employees (max 50): ");
    scanf("%d", &N);

    // Check for valid input
    if (N > 50 || N <= 0) {
        printf("Invalid number of employees.\n");
        return 1;  // Exit the program
    }

    // Read employee details using a pointer
    for (int i = 0; i < N; i++) {
        empPtr = &employ[i];  // Set the pointer to the current employee in the array

        printf("\nEnter details for employee #%d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &empPtr->empNumber);

        printf("Employee Name: ");
        getchar();  // To consume the newline character left by scanf
        fgets(empPtr->name, sizeof(empPtr->name), stdin);

        // Remove newline character from the name (if present)
        size_t len = strlen(empPtr->name);            // size_t is a datatype
        if (len > 0 && empPtr->name[len - 1] == '\n') {
            empPtr->name[len - 1] = '\0';
        }

        printf("Basic Pay: ");
        scanf("%f", &empPtr->basicPay);
    }

    // Print the list of all employees and their basic pay
    printf("\nEmployee List:\n\n");
    printf("---------------------------------------------\n");
    printf("Employee Number  | Employee Name  | Basic Pay\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < N; i++) {
        empPtr = &employ[i];  // Set the pointer to the current employee in the array
        printf("%-16d | %-14s | %.2f\n", empPtr->empNumber, empPtr->name, empPtr->basicPay);
    }

    return 0;
}
