// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define MAX_TRY_CHACH 3

int main(int argc, char *argv[])
{
    printBlue(logo);
    printf("--%s------------------------------------------%s------\n##%s#################\n\n", autors, version, github);

    int initChoise;
    int tryChach = 0;
    do
    {

        if (tryChach == MAX_TRY_CHACH)
        {
            printBlue("Aplication Quit\n");
            return 101; // Falha de exucucao por parte do usuario;
        }

        printf("[1] - Write a new file\n"
               "[2] - Read a File\n"
               "[3] - Help\n"
               "[4] - Autor's\n"
               "[5] - Quiet\n");

        sleep(2);
        scanf("%d", &initChoise);

        if (initChoise <= 0 || initChoise > 5)
        {
            printRed("\n\nChoise a option\n");
        }

        switch (initChoise)
        {
        case 1:
            initFile(1);
            break;
        case 2:
            initFile(2);
            break;

        case 3:
            printf("Commig soon....\n");
            break;

        case 4:
            aboutAutos();
            break;

        case 5:
            printGreen("Aplicacao finalizada com sucesso!\n");
            return 201; // User aplication Close
            break;

        default:
            break;
        }
    } while (initChoise != 5 && tryChach <= MAX_TRY_CHACH);

    return 0;
}