#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

if (num >= 0){
    printf("Esse número é positivo");
} else {
    printf ("Esse número é negativo");
}

    return 0;
}