#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "fila.h"

#define TAM 100
typedef struct fila{
    int end, start;
    char content[TAM];
}Fila;

Fila *newQueue(){
    Fila *newQueue = (Fila *)malloc(sizeof(Fila));
    newQueue->start = 0;
    newQueue->end= 0;

    return newQueue;
}

void insertQueue(Fila *fila, char new_Element){
    if(!fullQueue(fila))
        fila->content[(fila->end)++] = new_Element;
}
/*
@Brief Verifica se a fila está vazie e remove o primeiro elemento avaçando o começo da fila pra o próximo
 */
char removeQueue(Fila *fila){
    if(!emptyQueue(fila))
        return fila->content[(fila->start)++];

}
/*
@Brief - Verdadeira se a fila estiver cheia.
 */
int fullQueue(Fila *fila){
    return (fila->end == TAM-1);
}
/*
@Brief Retorna verdade se a filar estiver vazia (fim  == inicio);
 */
int emptyQueue(Fila *fila){
    return (fila->end == fila->start);
}
/*
Imprime do primeiro da fila para o últimom
 */
void printQueue(Fila *fila){
    for(int i = fila->start; i < fila->end; i++)
        printf("%c", fila->content[i]);
    printf("\n");
}
int sizeQueue(Fila *fila){
    return (fila->end - fila->start);
}