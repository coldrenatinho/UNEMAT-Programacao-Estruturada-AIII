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
            fclose(fptr);
        }
    }
    else
    {
        printRed("File Open Unsuncessful\n");
        return 301; // Falhar de IO
    }
}