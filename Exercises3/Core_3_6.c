#include <stdio.h>
#include "math.h"



int checkPrime(long num) {
    for (long i = 2; i < sqrt(num) + 1; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void clearBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int checkBufferForStop() {
    if (getchar() == 116 && getchar() == 111 && getchar() == 112 && getchar() == 10)
    {
        return 1;
    }

    return 0;
    


}

int main(void) {
    long input;
    int verifier;
    char ch;
    
    
    do {
    printf("Please enter an integer: ");
    verifier = scanf("%ld", &input);
    ch = getchar();
    

    if (verifier != 1)
    {   
        
        if (ch == 115)
        {
            if (checkBufferForStop())
            {
                printf("Program Stopped");
                verifier = 1;
                ch = 0;
                continue;

            }
            
        }
        
        clearBuffer();
    }

    else {
        

        if (ch != 10)
        {
            printf("Invalid Input! \n");
            clearBuffer();
            

            
            continue;
        }
        

        if (checkPrime(input)) {
            printf("The number you have entered is a prime number\n");
        }
        else {
            printf("The number you have entered is not a prime number\n");
        }
        
    }
    
    
    } while (verifier != 1 || ch != 0);
    
    return 0;
    
}