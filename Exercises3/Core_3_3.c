#include <stdio.h>


long reverseDigits(long input) {
    
    long reverseInput = 0;

    while (input > 0) {
        reverseInput = reverseInput * 10 + input % 10;
        input /= 10;
    }

    return reverseInput;

}

int main(void) {

    long input;

    printf("Enter an integer: ");
    scanf("%ld", &input);
    long reversed = reverseDigits(input);

    if (reversed == input) {
        printf("The integer you have entered is a palindrome \n");
    }
    else {
        printf("The integer you have entered is not a palindrome \n");
    }
    return 0;  
}