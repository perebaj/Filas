#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "fila.h"

#define TAM 100

/*
tamanho fila
remover elemento fila *verificar se esta vazia
verificar se a fila esta cheia
inserir elemento na fila
 */

typedef struct fila_vetor_circular
{
    int end, start;
    char content[TAM];
}Fila;

Fila *newQueue(){
    Fila *newQueue = (Fila *)malloc(sizeof(Fila));
    newQueue->start = 0;
    newQueue->end= 0;

    return newQueue;
}

int sizeQueue(Fila *fila){
    if(fila->end >= fila->start)
        return fila->end - fila->start;
    else 
        return (TAM - fila->start) - fila->end;
}

int emptyQueue(Fila *fila){
    return (fila->end == fila->start);
}

int fullQueue(Fila *fila){
    return (fila->end + 1) % TAM == fila->start;
}

char removeQueue(Fila *fila){
   if(!emptyQueue(fila)){
        fila->start = fila->start % TAM-1;
        return fila->content[fila->start];
    }
        
}

void insertQueue(Fila *fila, char new_Element){
    if(!fullQueue(fila)){
        fila->end = fila->end % TAM -1;
        fila->content[fila->end];
    }
}