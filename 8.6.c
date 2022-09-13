/* Exibição de strings em maiúsculas e minúscu-
las. Escreva um programa que receba uma linha de tex-
to no array de char s[100]. Imprima a linha com letras
maiúsculas e minúsculas. */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
// #include <string.h>

void imprimeStringMaiuscula(char s[]) {
    int i = 0;
    printf("Maiúsculas: ");
    do {
        printf("%c", toupper(s[i++]));
    } while (s[i] != 0);
    printf("\n");
}

void imprimeStringMinuscula(char s[]) {
    int i = 0;
    printf("Minúsculas: ");
    while (s[i] != 0) printf("%c", tolower(s[i++]));
    printf("\n");
}

int main(void) {
    char *s = calloc(sizeof(char), 100);
    scanf("%[^\n]%*c", s);
    printf("String original: %s\n", s);
    int tam = sizeof(s) / sizeof(s[0]);
    imprimeStringMaiuscula(s);
    imprimeStringMinuscula(s);
    free(s);
    return 0;
}