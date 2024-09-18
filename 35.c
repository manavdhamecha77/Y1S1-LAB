//35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N


#include<stdio.h>
int main(){
    int num,temp,orig_num,sum=0; //Declaration

    // Initialization of all variables
    printf("Enter the number:");
    scanf("%d",&num);
    orig_num = num;               // Storing value of num in orig_num because value of num changes after looping
    
    while(num>=10)                //Runs till the number isn't a single digit(1-9)
    {
        while(num!=0)             //Runs till number isn't zero
        {
            temp = num%10;        //Extracting the kast digit of num
            sum = sum + temp;     //Adding the last digit to sum
            num/=10;              //Dividing the num by 10 so second last digit becomes last digit
        }
        num=sum;                  // Used to store sum value in num as num is zero after above instructions  
        
        if(sum>=10)              //Checks if sum is a single digit number ,if not its value is cleared to zero for other translation
            sum=0;
        else
            break;               // if num is single digit , loop is terminated 
    }

    //Printing the result
    printf("The Single didit showing sum of %d is:%d",orig_num,num);
    
    return 0;
}