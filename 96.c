/*
96. WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING 
POINTERS.
*/

#include<stdio.h>
#include<string.h>

void sort_str(int n,char *pStrings) {
    
    // Simple bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pStrings[i] > pStrings[j]) {
                // Swap characters
                char temp = pStrings[i];
                pStrings[i] = pStrings[j];
                pStrings[j] = temp;
            }
        }
    }
}

int main()
{
    int N;
    printf("Enter number of strings to input: ");
    scanf("%d",&N);

    getchar(); // consumes \n from scanf
    
    char strings[N][25];
    for(int i=0;i<N;i++)
    {
        printf("Enter string #%d : ",i+1);
        if(fgets(strings[i],sizeof(strings[i]),stdin))
        {
            int n = strlen(strings[i]);
        if (n > 0 && strings[i][n-1] == '\n') strings[i][n-1] = '\0';
        }
    }

    

    for(int i=0;i<N;i++)
    {
        char *pStrings = NULL;
        pStrings = strings[i];
        int n = strlen(strings[i]);
        sort_str(n,pStrings);
        puts(strings[i]);
    }


}