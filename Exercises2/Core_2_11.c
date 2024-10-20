#include <stdio.h>

void squares();
void evenSquares();
void primeNumbers();

int main (void) {
    squares();
    printf("\n");
    evenSquares();
    printf("\n");
    primeNumbers();
    return 0;
}



void squares() {
    int count = 101;
    for (int i = 1; i < count; i++)
    {
        printf("%d",i*i);
        printf(",");
    }
    

}


void evenSquares() {
    int count = 101;
    for (int i = 1; i < count; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d",i*i);
            printf(",");
        }
        
        
    }
}


void primeNumbers() {
    int count = 2;
    int x = 1;

    while (count < 101)
    {
        for (int i = 2; i < count; i++)
        {
            if (count  %  i == 0)
            {
                x = 0;
                break;
            }
            
        }

        if (x == 1)
        {
            printf("%d",count);
            printf(",");
        }
        
        x = 1;
        count++;
        
    }
    
}