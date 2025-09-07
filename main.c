#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_rpc(int result);
void rules(void);
int num_game(int result);
int num_game(int result);
int penalties(int result);
int vic = 0;
int defeats = 0;

int main(void)
{
    int res;
    int ans;
    int user = 50;
    int computer;
    // while (vic > 5)
    // {
       while (user < 100 && user >= 0)
        {
            res = 0;
            printf ("\t*--------------------------------*\n");
            printf ("\t|            G A M E S           |\n");
            printf ("\t|                                |\n");
            printf ("\t| 1 > ROCK PAPER SCISSOR         |\n");
            printf ("\t| 2 > GUESS THE NUMBER           |\n");
            printf ("\t| 3 > PENALTIES                  |\n");
            printf ("\t| 4 > for see the rules          |\n");
            printf ("\t|--------------------------------|\n");        
            printf ("\t|      you need 100 points       |\n");
            printf ("\t|                                |\n");
            if (user >= 10)
                printf ("\t|       your points: %d          |\n", user);
            else
                printf ("\t|       your points: %d           |\n", user);
            printf ("\t|                                |\n");
            printf ("\t| victories: %d                   |\n", vic);
            printf ("\t| defeats:   %d                   |\n", defeats);
            printf ("\t|--------------------------------|\n");
            printf ("\t| 0 > EXIT                       |\n");
            printf ("\t*--------------------------------*\n\n");
            printf ("enter the number ->");
            scanf("%d", &ans);
            if (ans >= 0 && ans <=4)
            {
                if (ans == 1)
                {
                    res = main_rpc(res);
                    if (res == 0)
                        user -= 20;
                    else if (res == 1)
                        user += 30;
                    else if (res == 2)
                        user += 20;
                    else if (res == 3)
                        user += 10;
                }
                else if (ans == 2)
                {
                    res = num_game(res);
                    if (res == 0)
                        user -= 10;
                    else if (res == 10)
                        user += 10;
                    else if (res == 15)
                        user += 15;
                    else if (res == 20)
                        user += 20;
                    else if (res == 25)
                        user += 25;
                    else if (res == 30)
                        user += 30;
                    else if (res == 35)
                        user += 35;
                }
                else if (ans == 3)
                {
                    penalties(res);
                }
                else if (ans == 4)
                {
                    rules();
                }
                else if (ans == 0)
                {
                    printf ("thanks for play :)\n");
                    return (0);
                }
            }
        }
        if (user >= 100)
            printf("**********************************\n");
            printf("**********************************\n");
            printf("**                              **\n");
            printf("**       CONGRATULATIONS        **\n");
            printf("**                              **\n");
            printf("**     YOU ARE AN CHAMPION      **\n");
            printf("**                              **\n");
            printf("**     your final score: %d    **\n", user);
            printf("**                              **\n");
            printf("**********************************\n");
            printf("**********************************\n");
            vic += 1;
        if (user < 0)
        {
            printf("*************************************\n");
            printf("*************************************\n");
            printf("**                                 **\n");
            printf("**   sorry you lose the game :(    **\n");
            printf("**                                 **\n");
            printf("*************************************\n");
         printf("*************************************\n");
            defeats += 1;
        }
        user = 0;
    // }    
}