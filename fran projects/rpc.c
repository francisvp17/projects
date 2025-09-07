#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_rpc(int result)
{
    int respuesta;
    int u_p;
    int c_p;
    srand(time(NULL));

    u_p = 0;
    c_p = 0;
    result = 0;
    while (u_p <= 2 && c_p <= 2)
    {
        int numero = (rand() %3) + 1;
        printf("<-------------------------->\n");
        printf(" rock  |  paper  |  scissor \n");
        printf("  1         2         3     \n");
        printf("<-------------------------->\n");
        scanf("%d", &respuesta);
        if (respuesta == 1 || respuesta == 2 || respuesta == 3)
        {
            printf("\033[2J\033[H");
            
            if (numero == 1)
            {
                if (respuesta == 1)
                {
                    printf("<------------------------>\n");
                    printf("<          draw          >\n");
                    printf("<                        >\n");
                }
                else if (respuesta == 2)
                {
                    printf("<------------------------>\n");
                    printf("<        you won         >\n");
                    printf("<                        >\n");
                    u_p++;
                }
                else if (respuesta == 3)
                {
                    printf("<------------------------>\n");
                    printf("<        you lose        >\n");
                    printf("<                        >\n");
                    c_p++;
                }
            }
            else if (numero == 2)
            {
                if (respuesta == 1)
                {
                    printf("<------------------------>\n");
                    printf("<        you lose        >\n");
                    printf("<                        >\n");
                    c_p++;
                }
                else if (respuesta == 2)
                {
                    printf("<------------------------>\n");
                    printf("<          draw          >\n");
                    printf("<                        >\n");
                }
                else if (respuesta == 3)
                {
                    printf("<------------------------>\n");
                    printf("<        you won         >\n");
                    printf("<                        >\n");
                    u_p++;
                }
            }
            else if (numero == 3)
            {
                if (respuesta == 1)
                {
                    printf("<------------------------>\n");
                    printf("<        you won         >\n");
                    printf("<                        >\n");
                    u_p++;
                }
                else if (respuesta == 2)
                {
                    printf("<------------------------>\n");
                    printf("<        you lose        >\n");
                    printf("<                        >\n");
                    c_p++;
                }
                else if (respuesta == 3)
                {
                    printf("<------------------------>\n");
                    printf("<          draw          >\n");
                    printf("<                        >\n");
                }
            }
            printf("<  user: %d      comp: %d  >\n", u_p, c_p);
            printf("<------------------------>\n");
        }
        else 
            printf("error, enter a correct number\n\n");
    }
    system("clear");
    printf("<------------------------>\n");
    printf("<      Final Result      >\n");
    printf("<                        >\n");
    printf("<  user: %d     comp: %d   >\n", u_p, c_p);
    if (u_p > c_p)
    {
        printf("<                        >\n");
        printf("<        YOU WON         >\n");
        printf("<------------------------>\n");
        if (u_p == 3 && c_p == 0)
            result = 1;
        else if (u_p == 3 && c_p == 1)
            result = 2;
        else if (u_p == 3 && c_p == 2)
            result = 3;
    }
    else if (u_p < c_p)
    {
        printf("<                        >\n");
        printf("<        YOU LOSE        >\n");
        printf("<------------------------>\n");
        result = 0;
    }
    return (result);
}