//16. PROGRAM TO READ THREE NOS. AND PRINT MAX.

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

    // If a is greater than b,c ;then a is maximum and vice-versa
    if(a>b){
        if(a>c){
            printf("The maximum number is 'a'");
        }
        else{
            printf("The maximum number is 'c'");
        }
    }
    else{
        if(b>c){
            printf("The maximum number is 'b'");
        }
        else{
            printf("The maximum number is 'c'");
        }
    }
    return 0;
}