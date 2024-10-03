// This program displays a rectangle using two different ways
#include "graphics.h"


int main(void)
{
    drawLine(30,30,120,30);
    drawLine(30,30,30,120);
    drawLine(120,30,120,120);
    drawLine(30,120,120,120);

    drawRect(150,150,60,140);
    return 0;
}