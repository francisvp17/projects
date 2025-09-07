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
    int res = 0;
    int count = 0;
    int first, second;
    srand(time(NULL));

    while (count < 5) // 5 tiros
    {
        int numero = (rand() % 9) + 1; // portero elige 1-9
        printf("\nRound %d\n", count+1);
        printf("Elige dirección (dos flechas para esquina):\n");

        first = get_arrow();
        second = get_arrow();

        int shot = 0;

        // convertir flechas en 1..9
        if (first == 1 && second == 4 || first == 4 && second == 1) 
        {
            shot = 1; // arriba izq
            printf("|| (*)             ( )             ( ) ||\n");
        }
        else if (first == 1 && second == 1) 
        {
            shot = 2; // arriba centro
            printf("|| ( )             (*)             ( ) ||\n");
        }
        else if (first == 1 && second == 3 || first == 3 && second == 1) 
        {
            shot = 3; // arriba der
            printf("|| ( )             ( )             (*) ||\n");
        }
        else if (first == 4 && second == 4) 
        {
            shot = 4; // medio izq
            printf("|| (*)             ( )             ( ) ||\n");
        }
        else if (first == 1 && second == 2 || first == 2 && second == 1) 
        {
            shot = 5; // centro
            printf("|| ( )             (*)             ( ) ||\n");
        }
        else if (first == 3 && second == 3) 
        {
            shot = 6; // medio der
            printf("|| ( )             ( )             (*) ||\n");
        }
        else if (first == 2 && second == 4 || first == 4 && second == 2) 
        {
            shot = 7; // abajo izq
            printf("|| (*)             ( )             ( ) ||\n");
        }
        else if (first == 2 && second == 2) 
        {
            shot = 8; // abajo centro
            printf("|| ( )             (*)             ( ) ||\n");
        }
        else if (first == 2 && second == 3 || first == 3 && second == 2) 
        {
            shot = 9; // abajo der
            printf("|| ( )             ( )             (*) ||\n");
        }

        // resultado
        if (shot == numero) {
            printf("ATAJADA del portero! ❌\n");
            res = 1;
        } else {
            printf("GOOOOL! ✅\n");
            res = 2;
        }
        count++;
    }
    return res;
}
