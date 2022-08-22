#include <math.h>
#include <stdio.h>

void potencia()
{
    double base = 3;
    double contador = 0;
    double expoente = 15;
    double potencia = 0;

    while (contador != expoente)
    {
        potencia = pow(base, contador);
        printf("%0.0f\n", potencia);
        contador++;
    }
};

int main()
{
    potencia();
    return 0;
};
