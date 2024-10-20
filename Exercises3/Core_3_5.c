#include <stdio.h>
#include <string.h>


char* singleDigits(int num) {
    char* singleDigitsVerbalised[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    return singleDigitsVerbalised[num];
}

char* tenToNineteen(int num) {
    char* tenToNineteenVerbalised[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    return tenToNineteenVerbalised[num - 11];
}

char* tensDigits(int num) {
    char* tensDigits[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return tensDigits[num - 2];
}


int numOfDigits(int num) {
    int count = 0;
    if (num == 0)
        return 1;
    
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}


char* calcLastTwoDigits(int num) {
    if (num <= 10)
    {
        return singleDigits(num);
    }
    else if (num <= 19)
    {
        return tenToNineteen(num);
    }

    else if (num <= 99)
    {
        if (num % 10 == 0)
            return tensDigits(num/10);
            
        else {
            static char result[100];
            strcpy(result, tensDigits(num/10));
            strcat(result, " ");
            strcat(result, singleDigits(num%10));

            return result;
        }
        
        
    }
    
    
    
}


int main(void) {
    int input;

    printf("Please enter an integer from 0 to 999: ");
    scanf("%d",&input);
    
    int numberOfDigits = numOfDigits(input);

    if (numberOfDigits == 3)
    {
        printf("%s Hundred And %s",singleDigits(input / 100),calcLastTwoDigits(input % 100));
    }
    else if (numberOfDigits == 2)
    {
        printf("%s",calcLastTwoDigits(input % 100));
    }
    
    else {
        printf("%s", singleDigits(input));
    }
    

}