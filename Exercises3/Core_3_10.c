#include <stdio.h>
#include "string.h"

char* big0(int num) {
    char* lines[] = {"***** ", "*   * ", "*   * ", "*   * ", "***** "};
    return lines[num-1];
}

char* big1(int num) {
    char* lines[] = {"  *   ", " **   ", "  *   ", "  *   ", "***** "};
    return lines[num-1];
}

char* big2(int num) {
    char* lines[] = {"***** ", "    * ", "***** ", "*     ", "***** "};
    return lines[num-1];
}

char* big3(int num) {
    char* lines[] = {"***** ", "    * ", "***** ", "    * ", "***** "};
    return lines[num-1];
}

char* big4(int num) {
    char* lines[] = {"*   * ", "*   * ", "***** ", "    * ", "    * "};
    return lines[num-1];
}

char* big5(int num) {
    char* lines[] = {"***** ", "*     ", "***** ", "    * ", "***** "};
    return lines[num-1];
}

char* big6(int num) {
    char* lines[] = {"***** ", "*     ", "***** ", "*   * ", "***** "};
    return lines[num-1];
}

char* big7(int num) {
    char* lines[] = {"***** ", "    * ", "    * ", "    * ", "    * "};
    return lines[num-1];
}

char* big8(int num) {
    char* lines[] = {"***** ", "*   * ", "***** ", "*   * ", "***** "};
    return lines[num-1];
}

char* big9(int num) {
    char* lines[] = {"***** ", "*   * ", "***** ", "    * ", "***** "};
    return lines[num-1];
}

void printSeveralNumbers(int* numbers, int size) {
    for (int row = 1; row < 6; row++)
    {
        for (int i = 0; i < size; i++)
        {
            int num = numbers[i];
            switch(num) {
                case 0: printf("%s", big0(row)); break;
                case 1: printf("%s", big1(row)); break;
                case 2: printf("%s", big2(row)); break;
                case 3: printf("%s", big3(row)); break;
                case 4: printf("%s", big4(row)); break;
                case 5: printf("%s", big5(row)); break;
                case 6: printf("%s", big6(row)); break;
                case 7: printf("%s", big7(row)); break;
                case 8: printf("%s", big8(row)); break;
                case 9: printf("%s", big9(row)); break;
            }
        }
        
        printf("\n");
        
    }
    
}

int main(void) {
    int num;
    char numStr[10];

    printf("Enter a three digit number to be displayed: ");
    scanf("%d", &num);
    
    snprintf(numStr, sizeof(numStr), "%d", num);

    int digits[10]; 
    int size = strlen(numStr); // Length of the string {i.e., the number of digits}

    for (int i = 0; i < size; i++) {
        digits[i] = numStr[i] - '0'; // Convert each character to an integer
    }

    printSeveralNumbers(digits, size);
}