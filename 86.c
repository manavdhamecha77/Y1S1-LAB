// 86. WRITE A FUNCTION TO READ A LINE OF TEXT AND FIND OUT LENGTH OF STRING. 

#include<stdio.h>
#include<string.h>

int stlen(char str[100])
{
    int count = 0;
    for(int i=0 ; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
    
}

int main()
{
    char str[100];
    printf("\n Enter the string : ");
    fgets(str,100,stdin);
    printf("\nYou entered :");
    puts(str);

    printf("\nLenght of the string you entered is : %d",stlen(str)-1);

}