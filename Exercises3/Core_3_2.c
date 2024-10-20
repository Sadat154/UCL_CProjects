#include <stdio.h>

int loopPower(int x, int y) {
    int res = 1;
    for (int i = 0; i < y; i++)
    {
        res *= x;
    }
    
    return res;
}

int recursionPower(int x, int y) {
    if (y == 0)
    {
        return 1;
    }
    else {
        return x*(recursionPower(x,y-1));
    }
    

}



int main(void) {
    int x = 4;
    int y = 5; // 4**5

    printf("Result 1 using loops: %d \n", loopPower(x,y));
    printf("Result 2 using recursion: %d \n", recursionPower(x,y));


}