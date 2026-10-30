#include <stdio.h>

int main() {

    int contador, turma;
    printf("qual é o número de alunos?\n");
    scanf ("%d",&turma);
    int var [turma];
    contador = 0;

    while(contador!=turma)
        {
             var[contador] = contador+1;
            printf("%d\n", var[contador]);
            contador++;
        }
}
