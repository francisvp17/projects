#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_arrow() {
    char c = getchar();
    if (c == 27) {          // empieza con ESC
        if (getchar() == 91) { // luego [
            c = getchar();     // y acá viene A/B/C/D
            switch (c) {
                case 'A': return 1; // arriba
                case 'B': return 2; // abajo
                case 'C': return 3; // derecha
                case 'D': return 4; // izquierda
            }
        }
    }
    return 0; // otra tecla
}

int penalties(int result)
{
    int res;
    int goals;
    int fails;
    int count = 0;
    int first, second;
    srand(time(NULL));

    while (count < 6)
    {
        while (count == 0)
        {
            int numero = (rand() %9) + 1;
            printf("              FIRTS   ROUND             \n");
            printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
            printf("**=====================================**\n");
            printf("|| ( )             ( )             ( ) ||\n");
            printf("||                                     ||\n");
            printf("||                                     ||\n");
            printf("|| ( )             ( )             ( ) ||\n");
            printf("||                                     ||\n");
            printf("||                                     ||\n");
            printf("|| ( )             ( )             ( ) ||\n\n");
            printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
            first = get_arrow();
            second = get_arrow();
            printf("         RESULT  FIRTS   ROUND             \n");
            printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
            printf("**=====================================**\n");
            if (first == 1 || second == 1)
            {
                if (first == 1 && second == 4 || first == 4 && second == 1)
                {
                    if (numero == 1)
                    {
                        printf("|| (#)             ( )             ( ) ||\n");
                        res = 1;
                    }
                    else if (numero != 1)
                    {
                        printf("|| (*)             ( )             ( ) ||\n");
                        res = 2;
                    }
                }
                else if (first == 1 && second == 1)
                {
                    if (numero != 2)
                    {
                        printf("|| ( )             (*)             ( ) ||\n");
                        res = 2;
                    }
                    else if (numero == 2)
                    {
                        printf("|| ( )             (#)             ( ) ||\n");
                        res = 1;
                    }
                }
                else if (first == 1 && second == 3 || first == 3 && second == 1)
                {
                    if (numero != 3)
                    {
                        printf("|| ( )             ( )             (*) ||\n");
                        res = 2;
                    }
                    else if (numero == 3)
                    {
                        printf("|| ( )             ( )             (#) ||\n");
                        res = 1;
                    }
                }
            }
            else if(first != 2 && second != 2)
            {
                printf("|| ( )             ( )             ( ) ||\n");
            }
            printf("||                                     ||\n");
            printf("||                                     ||\n");
            if ((first == 3 || second == 3) || (first == 4 || second == 4) || (first == 1 || second == 1)) 
            {
                if (first == 4 && second == 4)
                {
                    if (numero != 4)
                    {
                        printf("|| (*)             ( )             ( ) ||\n");
                        res = 2;
                    }
                    else if (numero == 4)
                        printf("|| (#)             ( )             ( ) ||\n");
                        res = 1;
                }
                else if ((first == 1 && second == 2) || (first == 2 && second == 1))
                {
                    if (numero != 5)
                    {
                        printf("|| ( )             (*)             ( ) ||\n");
                        res = 2;
                    }
                    else if (numero == 5)
                    {
                        printf("|| ( )             (#)             ( ) ||\n");
                        res = 1;
                    }
                }
                else if ((first == 3 && second == 4) || (first == 4 && second == 3))
                {
                    if (numero != 5)
                    {
                        printf("|| ( )             (*)             ( ) ||\n");
                        res = 2;
                    }
                    else if (numero == 5)
                    {
                        printf("|| ( )             (#)             ( ) ||\n");
                        res = 1;
                    }
                }
                else if (first == 3 && second == 3)
                {
                    if (numero != 6)
                    {
                        printf("|| ( )             ( )             (*) ||\n");
                        res = 2;
                    }
                    else if (numero == 6)
                    {
                        printf("|| ( )             ( )             (#) ||\n");
                        res = 1;
                    }
                }
                else if ((first == 1 && second != 2) || (first = 2 && second != 1))
                {
                    printf("|| ( )             ( )             ( ) ||\n");
                }
            }
            printf("||                                     ||\n");
            printf("||                                     ||\n");
            if (first == 2 || second == 2)
            {
                if (first == 2 && second == 4 || first == 4 && second == 2)
                {
                    if (numero != 7)
                    {
                        printf("|| (*)             ( )             ( ) ||\n");
                        res = 2;
                    }
                    else if (numero == 7)
                    {
                        printf("|| (#)             ( )             ( ) ||\n");
                        res = 1;
                    }
                }
                else if (first == 2 && second == 2)
                {
                    if (numero != 8)
                    {
                        printf("|| ( )             (*)             ( ) ||\n");
                        res = 2;
                    }
                    else if (numero == 8)
                    {
                        printf("|| ( )             (#)             ( ) ||\n");
                        res = 1;
                    }
                }
                else if (first == 2 && second == 3 || first == 3 && second == 2)
                {
                    if (numero != 9)
                    {
                        printf("|| ( )             ( )             (*) ||\n");
                        res = 2;
                    }
                    else if (numero == 9)
                    {
                        printf("|| ( )             ( )             (#) ||\n");
                        res = 1;
                    }
                }
            }
            else if (first != 2 && second != 2)
                printf("|| ( )             ( )             ( ) ||\n");
            printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
            if (res == 2)
                printf("GOOOOL\n");
            else if (res == 1)
                printf("almost\n");
        }
    }
    return (res);
}