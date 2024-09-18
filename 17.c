//17. PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&) 

#include<stdio.h>
int main(){
    int a,b,c; //Declaration

    // Initialization of all variables
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    // Ifa is greater than b,c ;then a is maximum and vice-versa

    if (a>b && a>c)
    {
        printf("a:%d is maximum!",a);
    }
    else if(b>a && b>c)
    {
        printf("b:%d is maximum!",b);
    }
    else
    {
        printf("c:%d is maximum!",c);
    }
    return 0;
}