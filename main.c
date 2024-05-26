#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#define logo "██████╗ ██╗    ██╗ ██████╗ ██████╗ ██████╗         ███████╗██████╗ ██╗██████╗ \n██╔════╝ ██║    ██║██╔═══██╗██╔══██╗██╔══██╗        ██╔════╝██╔══██╗██║██╔══██╗\n██║█████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║        █████╗  ██║  ██║██║██║  ██║\n██║╚════╝██║███╗██║██║   ██║██╔══██╗██║  ██║        ██╔══╝  ██║  ██║██║██║  ██║\n╚██████╗ ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗██████╔╝██║██████╔╝\n╚═════╝  ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝╚═════╝ ╚═╝╚═════╝\n"
#define version "0.0.1"
#define autors "Renato A.S, Dyeni & Rosi"

#define MAX_BUFFER 2000

void readlocalfile()
{

    FILE *fptr;
    fptr = fopen("test.txt", "r");

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

int main(int argc, char *argv[])
{
    puts(logo);
    printf("--%s------------------------------------------%s------\n\n", autors, version);
    readlocalfile();
    return 0;
}