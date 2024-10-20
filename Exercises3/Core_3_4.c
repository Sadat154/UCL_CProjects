#include <stdio.h>



int sequenceProduct(int num1, int num2) {
    int product = 1;

    for (int i = num1; i < num2+1; i++)
    {
        if (i != 0)
            product *= i;
        printf("%d",i);
    }
    return product;
    
}


int main(void) {
    int num1;
    int num2;
    printf("Please enter 2 integers separeted by a space: ");
    scanf("%d %d", &num1, &num2);
    printf("The result of the product of the sequence of numbers from %d to %d is: %d \n",num1,num2,sequenceProduct(num1,num2));
}