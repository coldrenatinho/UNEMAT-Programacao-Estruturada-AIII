#include <stdio.h>
#include <stdlib.h>

// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#define logo "██████╗ ██╗    ██╗ ██████╗ ██████╗ ██████╗         ███████╗██████╗ ██╗██████╗ \n██╔════╝ ██║    ██║██╔═══██╗██╔══██╗██╔══██╗        ██╔════╝██╔══██╗██║██╔══██╗\n██║█████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║        █████╗  ██║  ██║██║██║  ██║\n██║╚════╝██║███╗██║██║   ██║██╔══██╗██║  ██║        ██╔══╝  ██║  ██║██║██║  ██║\n╚██████╗ ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗██████╔╝██║██████╔╝\n╚═════╝  ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝╚═════╝ ╚═╝╚═════╝\n"

char relativepath[200];

void bufferwite()
{

    printf("Digite o buffer de entrada:\n");
    fgets();
}

void filew(char input0[400])
{
    FILE *fpointer = fopen(input0, "w");
    if (fpointer == NULL)
    {
        printf("Erro opening file!");
        return 1;
    }
    fprintf(fpointer, )
}

int main(int argc, char *argv[])
{
}