#include <stdio.h>

void casaArea()
{
    char nome;
    char resposta;

    int largura;
    int comprimento;
    int area;
    int total = 0;

    while (resposta != 'N')
    {
        printf("Digite o nome do cômodo: ");
        scanf("%s", &nome);

        printf("Digite a largura do cômodo: ");
        scanf("%d", &largura);

        printf("Digite o comprimento do cômodo: ");
        scanf("%d", &comprimento);

        area = largura * comprimento;

        printf("Área do cômodo: %d\n", area);
        printf("Deseja continuar calculando? (S/N): ");
        scanf("%s", &resposta);
        total += area;
    }
    printf("Total da área: %d M²\n", total);
}

void main()
{
    casaArea();
}