#include <stdio.h>


int factorial(int num) {

    if (num == 1 || num == 0) {
        return 1;
    }

    else {
        return num * factorial(num-1);
    }
    
}

int checkStrong(int num) {
    int sum = 0;
    int initialNum = num;

    while (num != 0)
    {
        sum += factorial(num % 10);
        num = num / 10;
    }

    if (sum == initialNum)
        return 1;
    else
        return 0;

}


int main(void) {

    int num1;
    int num2;

    printf("Enter the range to check for strong numbers, separating them with a space: ");
    scanf("%d %d", &num1, &num2);

    printf("%d ", factorial(0));

    for (int i = num1; i < num2+1; i++)
    {
        if (checkStrong(i))
            printf("%d ", i);
    }
    
    

}