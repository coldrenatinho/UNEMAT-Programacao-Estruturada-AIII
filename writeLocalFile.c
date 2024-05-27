#include "main.h"

void writeLocalFile()
{
    char bufferWrite[MAX_BUFFER];

    FILE *fptr;
    fptr = fopen("test.txt", "w"); // Substituir por init file

    fputs("New mensagem\n", fptr);

    fclose(fptr);
}