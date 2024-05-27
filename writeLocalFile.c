#include "main.h"

#define MAX_TRY_SAVE_FILE 3

void writeLocalFile(const char *filename)
{
    char bufferWrite[MAX_BUFFER];
    char checkSaveFile = "N";
    int trySaveFileCount = 0;
    ;

    FILE *fptr;
    fptr = fopen(filename, "w");

    printf("Digite o texto (Ctrl+D para encerrar):\n");

    while (fgets(bufferWrite, MAX_BUFFER, stdin) != NULL)
    {
        fputs(bufferWrite, fptr);
        // printRed("Buffer save!");
    }

    fclose(fptr);
    printGreen("File Save!\n");
}