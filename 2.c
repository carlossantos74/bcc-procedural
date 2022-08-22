#include <stdio.h>

void somatorio()
{

    int valor;
    int soma = 0;
    int total = 1;
    float media;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    while (valor > 0)
    {
        soma += valor;
        printf("Digite um valor: ");
        scanf("%d", &valor);
        total++;
    }

    media = soma / total;

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Total de valores: %d\n", total);
}

void main()
{
    somatorio();
}
