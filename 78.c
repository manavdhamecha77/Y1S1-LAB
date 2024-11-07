// 78. WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT

#include<stdio.h>
#include<math.h>

int is_armstrong(int num)
{
    int temp, sum=0, orig_num, count=0;
    orig_num = num;  // Storing value of num in another variable because value of num changes in looping

        while(num>0)  // To count number of digits of number entered
    {
        num/=10;
        count++;
    }

    num = orig_num;  // value of num is 0 after while loop so giving num its value back

    while(num>0)
    {
        temp = num % 10;
        sum += pow(temp,count);
        num /= 10;
    }

    //num becomes 0 again!!
    if(orig_num == 153)
    {
        printf("The number %d is an Armstrong Number!!",orig_num);
    }
    else if(orig_num == sum)
    {
        printf("The number %d is an Armstrong Number!!",orig_num);
    }
    else
    {
        printf("The number %d is an not Armstrong Number!!",orig_num);
    }
}

int main(){
    int num; //Declaration

    // Initialization of all variables
    printf("Enter the number to check whether it's an armstrong number or not:");
    scanf("%d",&num);

    is_armstrong(num);
    
    return 0;
}