#ifndef MAIN_H
#define MAIN_H

#include "initFile.c"
#include "readLocalFile.c"
#include "writeLocalFile.c"
#include "colorSchema.c"
#include "autors.c"
#include "helpC_Edit.c"

// PROGRAMS INFO'
#define logo "██████╗ ██╗    ██╗ ██████╗ ██████╗ ██████╗         ███████╗██████╗ ██╗██████╗ \n██╔════╝ ██║    ██║██╔═══██╗██╔══██╗██╔══██╗        ██╔════╝██╔══██╗██║██╔══██╗\n██║█████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║        █████╗  ██║  ██║██║██║  ██║\n██║╚════╝██║███╗██║██║   ██║██╔══██╗██║  ██║        ██╔══╝  ██║  ██║██║██║  ██║\n╚██████╗ ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗██████╔╝██║██████╔╝\n╚═════╝  ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝╚═════╝ ╚═╝╚═════╝\n"
#define version "1.0.0"
#define autors "Renato A.S, Dyeni & Rosi"
#define github "github.com/coldrenatinho/UNEMAT-Programacao-Estruturada-AIII"

#define MAX_BUFFER 2000

// init File
void *initFile(int option);

// whire Local File
void writeLocalFile(const char *filemane);

// read a local File
void readLocalFile(const char *filename);

// Buffer User String
char *bufferUserString();

// Autors
void aboutAutos();

// Color Scherma
void printRed(const char *text);
void printGreen(const char *text);
void printYellow(const char *text);
void printBlue(const char *text);
void printMagenta(const char *text);

#endif