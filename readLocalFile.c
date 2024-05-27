#include "main.h"

#define MAX_BUFFER 2000

void readLocalFile(const char *filename)
{

    FILE *fptr;
    fptr = fopen(filename, "r"); // Substituir por init file

    char readBuffer[MAX_BUFFER];

    if (fptr != NULL)
    {
        printGreen("File Open Sucessfull\n");
        while (fgets(readBuffer, MAX_BUFFER, fptr))
        {

            printf("%s", readBuffer);
        }
    }
    else
    {
        printBlue("File Oen Unsuncessful");
    }

    fclose(fptr);
}