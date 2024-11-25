#include <stdio.h>

int main()
{
    int x = 0, a = 0, b = 0, c = 0;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
       printf("Vc digitou o numero: %d\n",a);

    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    printf("Vc digitou o numero: %d\n",b);

    c = a + b;

    printf("A soma dos 2 numeros eh: %d:\n", c);

    printf("Digite qualquer tecla pra finalizar");
    scanf("%d", x);

    return 0;
}