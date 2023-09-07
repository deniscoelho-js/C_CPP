#include <stdio.h>
#include <stdlib.h>

// https://www.youtube.com/watch?v=QgZweH_27po&list=PLqJK4Oyr5WSjQ584hwqaHJYDpDcYqS-HK&index=46

typedef struct 
{
    int dia, mes, ano;
} Data;


typedef struct 
{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
}No;





