// 79. WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y

#include<stdio.h>

void swap(int *a,int *b)
{
    int c;
    //Logic
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a,b; //Declaration

    // Initialization of all variables
    
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    int *pA,*pB;
    pA = &a;
    pB = &b;

    swap(pA,pB);

    printf("\nThe new value of a is:%d",*pA);
    printf("\nThe new value of b is:%d",*pB);

    return 0;
}