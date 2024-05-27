#include "main.h"

#define MAX_FILE_NAME 200

void *initFile(int option)
{

    char nameFile[MAX_FILE_NAME];
    const int FILE_TRUE = 1;
    char checkFile[3];

    do
    {
        printf("Digite o o nome para o arquivo:\t");
        scanf("%s", nameFile);

        if (nameFile[0] == '\n')
        {
            printRed("The name of file is empit!!!\n");
        }
        else
        {
            printf("The name file is correct ?(Y/N)\n%s\n", nameFile);
            scanf("%s", checkFile);
        }
    } while (checkFile[0] != 'y' && checkFile[0] != 'Y');

    strcat(nameFile, ".txt");

    switch (option)
    {

    case 1:
        writeLocalFile(nameFile);
        break;
    case 2:
        readLocalFile(nameFile);
        break;

    default:
        break;
    }
}