#include "main.h"

#define MAX_BUFFER_READ 2000
void readLocalFile(const char *filename)
{
    FILE *fptr;
    fptr = fopen(filename, "r");
    char readBuffer[MAX_BUFFER_READ] = {};

    fflush(fptr);

    if (fptr != NULL)
    {
        printGreen("----------------------File Open Sucessfull----------------------\n");
        while (fgets(readBuffer, MAX_BUFFER_READ, fptr))
        {
            printf("%s", readBuffer);
        }
    }
    else
    {
        printRed("File Open Unsuncessful\n");
        return 301; // Falhar de IO
    }
    printYellow("----------------------End of file!----------------------\n");
    fclose(fptr);
}
