#include "main.h"

#define MAX_TRY_SAVE_FILE 3
#define MAX_BUFFER_WRITE 2000
void writeLocalFile(const char *filename)
{
    char bufferWrite[MAX_BUFFER_WRITE];
    char checkSaveFile = "N";
    int trySaveFileCount = 0;
    ;

    FILE *fptr;
    fptr = fopen(filename, "w");

    printYellow("----------------------Digite o texto (Ctrl+D para encerrar)----------------------\n");

    while (fgets(bufferWrite, MAX_BUFFER_WRITE, stdin) != NULL)
    {
        fputs(bufferWrite, fptr);
        // printRed("Buffer save!");
    }

    fclose(fptr);
    printGreen("----------------------File Save!----------------------\n");
}