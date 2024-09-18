//19.PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR.

#include<stdio.h>
int main(){
    char ch; //Declaration

    // Initialization of all variables
    printf("Enter any character:");
    scanf("%c",&ch);

    // For small case letter ASCII range = (97-122) 
    //Using Ternary operator (?:)
    (ch>=97 && ch<=122) ? printf("This is a small case letter") : printf("This is not a small case letter");
    return 0;
}