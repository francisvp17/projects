#include <stdio.h>

void rules(void)
{  
    int res;
    printf("------------------------------------------------------------\n");
    printf("ROCK PAPER SCISSOR:\n\n");
    printf("victory 3-0 = 30  points\n");
    printf("victory 3-1 = 20  points\n");
    printf("victory 3-2 = 10  points\n");
    printf("lose        = -20 points\n\n");
    printf("GUESS THE NUMBER:\n\n");
    printf("difficult: easy   = five attemps                = 10  points\n");
    printf("difficult: easy   = in an attemp                = 15  points\n");
    printf("difficult: medium = in five attemps             = 20  points\n");
    printf("difficult: medium = in an attemp                = 25  points\n");
    printf("difficult: hard   = in five attemps             = 30  points\n");
    printf("difficult: hard   = in an attemp                = 35  points\n");
    printf("                    MORE THAN THREE             = -10 points\n");
    printf("------------------------------------------------------------\n");
}
