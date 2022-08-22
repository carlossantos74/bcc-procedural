#include <stdio.h>
#define LENGTH 12;

void printValues(int atual, int anterior, int proximo)
{
    printf("%d\n", anterior);
    printf("%d\n", atual);
    printf("%d\n", proximo);
}

void fibonacci()
{
    int atual = 1;
    int anterior = 1;
    int proximo = atual + anterior;

    printValues(atual, anterior, proximo);

    for (int i = 0; i < LENGTH i++)
    {
        atual = anterior;
        anterior = proximo;
        proximo = atual + anterior;
        printf("%d\n", proximo);
    }
}

void main()
{
    fibonacci();
};