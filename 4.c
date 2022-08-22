#include <stdio.h>

typedef unsigned long long TBiglog;

void grao()
{
    TBiglog inicial = 1;
    TBiglog total = 1;

    printf("%llu\n", inicial);

    for (int i = 0; i < 63; i++)
    {
        TBiglog proximo = inicial * 2;
        printf("%llu\n", proximo);
        inicial = proximo;
        total += inicial;
    }
    printf("Total é: %llu", total);
}

void main()
{
    grao();
}