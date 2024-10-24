#include <stdio.h>
#include "string.h"


int main(void) {
    int hour;
    int min;
    printf("Please enter the time in 24h format, e.g., 20:08: ");
    scanf("%d:%d",&hour,&min);

    if (hour > 12) {
        printf("%d.%dpm",(hour-12),min);
    }
    else
        printf("%d.%dam",(hour),min);
    

} //0 would be easy to implement so not bothered