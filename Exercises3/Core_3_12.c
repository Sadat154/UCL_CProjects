#include <stdio.h>
#include "string.h"
#include <stdlib.h>
#include <ctype.h>

int checkSegment(char* str) {
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
        {
            return 0;
        }
        
    }

    int segment = atoi(str);
    return (segment >= 0 && segment <= 255);
    
}



int checkValidIp(char* ipAddress) {
    int segments = 0; //should be 4

    char* segment = strtok(ipAddress, ".");

    while (segment != NULL)
    {
        
        if (!checkSegment(segment))
        {
            return 0;
        }

        segment = strtok(NULL, ".");
        segments++;
        
    }

    return (segments == 4);
    
}


int main(void) {
    char input[16];
    printf("Enter an IPv4 address: ");
    scanf("%15s", input);
    
    char copiedInput[16];
    strcpy(copiedInput, input);

    if (checkValidIp(copiedInput)) {
        printf("Valid IPV4 Address");
    }

    else {
        printf("Invalid IPV4 Address");
    }

    
}