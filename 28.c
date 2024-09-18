//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT. 
#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum=0,orig_num,count=0; //Declaration

    // Initialization of all variables
    printf("Enter the number to check whether it's an armstrong number or not:");
    scanf("%d",&num);

    orig_num = num;  // Storing value of num in another variable because value of num changes in looping

        while(num>=1)  // To count number of digits of number entered
    {
        num/=10;
        count++;
    }
    num = orig_num;  // value of num is 0 after while loop so giving num its value back

    while(num!=0)
    {
        temp = num%10;
        sum = sum + pow(temp,count);
        num = num/10;
    }

    //num becomes 0 again!!
    if(orig_num == sum)
    {
        printf("The number %d is a Armstrong Number!!",orig_num);
    }
    else
    {
        printf("The number %d is a not Armstrong Number!!",orig_num);
    }
    return 0;
}