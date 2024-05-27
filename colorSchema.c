#include "main.h"

// Função para imprimir texto vermelho
void printRed(const char *text)
{
    printf("\x1b[31m%s\x1b[0m", text);
}

// Função para imprimir texto verde
void printGreen(const char *text)
{
    printf("\x1b[32m%s\x1b[0m", text);
}

// Função para imprimir texto amarelo
void printYellow(const char *text)
{
    printf("\x1b[33m%s\x1b[0m", text);
}

// Função para imprimir texto azul
void printBlue(const char *text)
{
    printf("\x1b[34m%s\x1b[0m", text);
}

// Função para imprimir texto magenta
void printMagenta(const char *text)
{
    printf("\x1b[35m%s\x1b[0m", text);
}

// Função para imprimir texto ciano
void printCyan(const char *text)
{
    printf("\x1b[36m%s\x1b[0m", text);
}