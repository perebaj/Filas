typedef struct fila_vetor_circular Fila;

Fila *newQueue();
void insertQueue(Fila *fila, char new_Element);
char removeQueue(Fila *fila);
int fullQueue(Fila *fila);
int emptyQueue(Fila *fila);
int sizeQueue(Fila *fila);
// void printQueue(Fila *fila);