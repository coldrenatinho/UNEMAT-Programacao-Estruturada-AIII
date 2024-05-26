#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#define logo "██████╗ ██╗    ██╗ ██████╗ ██████╗ ██████╗         ███████╗██████╗ ██╗██████╗ \n██╔════╝ ██║    ██║██╔═══██╗██╔══██╗██╔══██╗        ██╔════╝██╔══██╗██║██╔══██╗\n██║█████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║        █████╗  ██║  ██║██║██║  ██║\n██║╚════╝██║███╗██║██║   ██║██╔══██╗██║  ██║        ██╔══╝  ██║  ██║██║██║  ██║\n╚██████╗ ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗██████╔╝██║██████╔╝\n╚═════╝  ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝╚═════╝ ╚═╝╚═════╝\n"

#define MAX_BUFFER 2000

void readlocalfile()
{

    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char readBuffer[MAX_BUFFER];
    char *preadBuffer = &readBuffer;

    if (fptr != NULL)
    {
        printf("File Open Sucessfull\n");
        while (fgets(readBuffer, MAX_BUFFER, fptr))
            ;
        printf("%s", readBuffer);
    }
    else
    {
        printf("File Opne Unsuncessful");
    }

    fclose(fptr);
}

void writelocalfile()
{
    char bufferWrite[MAX_BUFFER];

    FILE *fptr;
    fptr = fopen("test.txt", "w");

    if (fptr != NULL)
    {
        fgets(bufferWrite, MAX_BUFFER, fptr);
    }
}

main(int argc, char *argv[])
{
    readlocalfile();
    return 0;
}