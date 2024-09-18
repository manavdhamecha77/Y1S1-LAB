//34. PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) 
 
 #include<stdio.h>
 int main(){
    int a=0,b=1,c,i,n; //Declaration
   
    // Initialization of all variables
    printf("Enter till how many terms required:");
    scanf("%d",&n);
    printf("\n%d",a); 
    printf("\n%d",b); // Printing the initial two terms 0,1

    //For loop to print after terms
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }

    return 0;
 }