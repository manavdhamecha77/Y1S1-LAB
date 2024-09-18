//14. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL. 

#include<stdio.h>
int main(){
    char ch; //Declaration

    // Initialization of all variables
    printf("Enter the character:");
    scanf("%c",&ch);

    /*
    Capital letters = (65-90)
    Small case letters = (97-122)
    Digits = (48-57)
    Special Characters = (-)
    */
   
    if (ch>=65 && ch<=90)
    {
        printf("This is Capital Letter");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("This is Small Case Letter");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("This is a digit");
    }
    else
    {
        printf("This is a Special Character");
    }

    return 0;
}