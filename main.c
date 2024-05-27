// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#include "main.h"

#define MAX_TRY_CHACH 3

int main(int argc, char *argv[])
{
    while (1 == 1)
    {
        printBlue(logo);
        printf("--%s------------------------------------------%s------\n##%s#################\n\n", autors, version, github);

        int initChoise = 0;
        int tryChach = 0;

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
        scanf(" %d", &initChoise);
        fflush(stdin);
        printf("\n\n%d", initChoise);

        switch (initChoise)
        {
        case 1:
            initFile(1);
            // return 0;
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
            printGreen("-----------Aplicacao finalizada com sucesso!-----------\n");
            return 201; // User aplication Close
            break;

        case 0:
            printRed("\n\n\nOUT BREAK");
            return 0;

        default:
            break;
        }

        // return 0;
    }
}