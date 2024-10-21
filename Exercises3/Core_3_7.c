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


int main(void) {
    int input1;
    int input2;
    printf("Please two numbers to determine the range, separated by a space: ");
    scanf("%d %d", &input1, &input2);

    int array[input2 - input1];
    int twinPrime[input2 - input1];
    int count = 0;
    int count2 = 0;
    for (int i = input1; i < (input2+1); i++)
    {
        if (checkPrime(i)) {
            array[count] = i;
            count++;
        }
    }

    //Do the twin prime checks here
    
    


}