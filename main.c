// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// COLOR SCHEMA
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

// PROGRAMS INFO'
#define logo "██████╗ ██╗    ██╗ ██████╗ ██████╗ ██████╗         ███████╗██████╗ ██╗██████╗ \n██╔════╝ ██║    ██║██╔═══██╗██╔══██╗██╔══██╗        ██╔════╝██╔══██╗██║██╔══██╗\n██║█████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║        █████╗  ██║  ██║██║██║  ██║\n██║╚════╝██║███╗██║██║   ██║██╔══██╗██║  ██║        ██╔══╝  ██║  ██║██║██║  ██║\n╚██████╗ ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗██████╔╝██║██████╔╝\n╚═════╝  ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝╚═════╝ ╚═╝╚═════╝\n"
#define version "0.0.5"
#define autors "Renato A.S, Dyeni & Rosi"
#define github "github.com/coldrenatinho/UNEMAT-Programacao-Estruturada-AIII"

// Define parameters
#define MAX_BUFFER 2000
#define MAX_FILE_NAME 200

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
        printf(ANSI_COLOR_GREEN "File Opne Unsuncessful");
        printf(ANSI_COLOR_RESET);
    }

    fclose(fptr);
}

void writelocalfile()
{
    char bufferWrite[MAX_BUFFER];

    FILE *fptr;
    fptr = fopen("test.txt", "w"); // Substituir por init file

    if (fptr != NULL)
    {
        fgets(bufferWrite, MAX_BUFFER, fptr);
    }
}
char initFile()
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
            printf(ANSI_COLOR_RED "The name of file is empit!!!\n");
            printf(ANSI_COLOR_RESET);
        }
        else
        {
            printf("The name file is correct ?(Y/N)\n%s\n", nameFile);
            scanf("%s", checkFile);
        }
    } while (checkFile[0] != 'y' && checkFile[0] != 'Y');

    strcat(nameFile, ".txt");
    puts(nameFile);
    return nameFile;
}

int main(int argc, char *argv[])
{
    puts(logo);
    printf("--%s------------------------------------------%s------\n##%s#################\n\n", autors, version, github);
    initFile();
    readLocalFile();
    return 0;
}