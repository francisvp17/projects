#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_game(int result)
{
    int count;
    int ans;
    int choose;
    int stop = 0;

    while (count < 5)
    {
        printf("/************************************\\\n");
        printf("*          GUESS THE NUMBER          *\n");
        printf("*                                    *\n");
        printf("* Choose a difficulty                *\n");
        printf("* 1 > easy   (1-10)                  *\n");
        printf("* 2 > medium (1-20)                  *\n");
        printf("* 3 > hard   (1-50)                  *\n");
        printf("*                                    *\n");
        printf("* IMPORTANT: you have only 3 attemps *\n");
        printf("\\************************************/\n");
        scanf("%d", &choose);
        if (choose == 1)
        {   
            count = 0;
            printf("* easy mode *\n");
            srand(time(NULL));
            int numero = (rand() %10) + 1;
            while (stop != 1 && count < 5)
            {
                printf("\n\nyour attemps: %d\n", count);
                printf("try to guess:");
                scanf("%d", &choose);
                if (choose != numero)
                    count++;
                else if (choose == numero)
                    stop++;
            }
        }
        else if (choose == 2)
        {   
            count = 0;
            printf("* medium mode *\n");
            srand(time(NULL));
            int numero = (rand() %20) + 1;
            while (stop != 1 && count < 5)
            {
                printf("\n\nyour attemps: %d\n", count);
                printf("try to guess:");
                scanf("%d", &choose);
                if (choose != numero)
                    count++;
                else if (choose == numero)
                    stop++;
            }
        }
        else if (choose == 3)
        {   
            count = 0;
            printf("* hard mode *\n");
            srand(time(NULL));
            int numero = (rand() %50) + 1;
            while (stop != 1 && count < 5)
            {

                printf("\n\nyour attemps: %d\n", count);
                printf("try to guess:");
                scanf("%d", &choose);
                if (choose != numero)
                    count++;
                else if (choose == numero)
                    stop++;
            }
        }

    }
    printf("/**********************\\\n");
    printf("*     Final Result     *\n");
    printf("*                      *\n");
    if (stop == 1)
    {
        if (stop == 1 && count <= 1)
        {
            printf("*   PERFECT VICTORY    *\n");
            printf("*     attemps: %d      *\n", count);
            printf("\\**********************/\n");
            if (choose == 1)
                result = 15;
            else if (choose == 2)
                result = 25;
            else if (choose == 3)
                result = 35;
        }
        else
        {
            printf("*      YOU WON        *\n");
            printf("*    attemps: %d      *\n", count);
            printf("\\**********************/\n");
            if (choose == 1)
                result = 10;
            else if (choose == 2)
                result = 20;
            else if (choose == 3)
                result = 30;
        }
    }
    else if (count >= 5)
    {
        printf("*      YOU LOSE        *\n");
        printf("* more than 3 attemps  *\n");
        printf("\\**********************/\n ");
        result = 0;
    }
    return (result);
}