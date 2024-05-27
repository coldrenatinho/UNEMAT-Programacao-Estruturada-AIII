#include "main.h"

#define MAX_BUFFER 2000

void readLocalFile()
{

    FILE *fptr;
    fptr = fopen("test.txt", "r"); // Substituir por init file

    char readBuffer[MAX_BUFFER];

    if (fptr != NULL)
    {
        printf("File Open Sucessfull\n");
        while (fgets(readBuffer, MAX_BUFFER, fptr))
        {

            printf("%s", readBuffer);
        }
    }
    else
    {
        printf(printGreen("File Oen Unsuncessful"));
        // printf(ANSI_COLOR_RESET);
    }

    fclose(fptr);
}