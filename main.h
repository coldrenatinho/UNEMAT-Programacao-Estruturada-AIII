#ifndef MAIN_H
#define MAIN_H

#include "initFile.c"
#include "readLocalFile.c"
#include "writeLocalFile.c"
#include "bufferUserString.c"
#include "colorSchema.c"

// PROGRAMS INFO'
#define logo "██████╗ ██╗    ██╗ ██████╗ ██████╗ ██████╗         ███████╗██████╗ ██╗██████╗ \n██╔════╝ ██║    ██║██╔═══██╗██╔══██╗██╔══██╗        ██╔════╝██╔══██╗██║██╔══██╗\n██║█████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║        █████╗  ██║  ██║██║██║  ██║\n██║╚════╝██║███╗██║██║   ██║██╔══██╗██║  ██║        ██╔══╝  ██║  ██║██║██║  ██║\n╚██████╗ ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗██████╔╝██║██████╔╝\n╚═════╝  ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝╚═════╝ ╚═╝╚═════╝\n"
#define version "0.1.2"
#define autors "Renato A.S, Dyeni & Rosi"
#define github "github.com/coldrenatinho/UNEMAT-Programacao-Estruturada-AIII"

#define MAX_BUFFER 2000

// init File
char *initFile();

// whire Local File
void writeLocalFile();

// reald Local File
void writeLocalFile();

// Buffer User String
char *bufferUserString();

// Color Scherma
void printRed(const char *text);
void printGreen(const char *text);
void printYellow(const char *text);
void printBlue(const char *text);
void printMagenta(const char *text);

#endif