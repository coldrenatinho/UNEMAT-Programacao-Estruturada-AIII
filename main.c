// UNEMAT (UNIVERSIDADE DO ESTADOR DO MATO GROSSO) - SINOP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(int argc, char *argv[])
{
    puts(logo);
    printf("--%s------------------------------------------%s------\n##%s#################\n\n", autors, version, github);

    initFile();
    writeLocalFile();
    readLocalFile();

    return 0;
}