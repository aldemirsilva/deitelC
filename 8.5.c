/* Teste de caracteres. Escreva um programa que receba
um caractere do teclado e teste-o com cada uma das fun-
ções na biblioteca de tratamento de caractere. O progra-
ma deverá imprimir o valor retornado por cada função. */

#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
char caracter;
    scanf("%c", &caracter);
    if (isdigit(caracter)) printf("É dígito.\n");
    else ("Não é dígito.\n");
    
    if (isalpha(caracter)) printf("É letra.\n");
    else printf("Não é letra.\n");

    if (isalnum(caracter)) printf("É um dígito ou uma letra.\n");
    else printf("Não é dígito nem letra.\n");

    if (isxdigit(caracter)) printf("É um caracter de dígito hexadecimal.\n");
    else printf("Não é um caracter de dígito hexadecimal.\n");

    if (islower(caracter)) printf("É uma letra minúscula.\n");
    else printf("Não é uma letra minúscula.\n");

    if (isupper(caracter)) printf("É uma letra maiúscula.\n");
    else printf("Não é uma letra maiúscula.\n");

    printf("O caracter digitado em minúscula é: %c.\n", tolower(caracter));

    printf("O caracter digitado em maiúscula é: %c.\n", toupper(caracter));

    if (isspace(caracter)) printf("É um espaço.\n");
    else printf("Não é um espaço.\n");

    if (iscntrl(caracter)) printf("É um caracter de controle.\n");
    else printf("Não é um caracter de controle.\n");

    if (ispunct(caracter)) printf("É um caracter imprimível diferente de um espaço, um dígito ou uma letra.\n");
    else printf("Não é um caracter imprimível diferente de um espaço, um dígito ou uma letra.\n");

    if (isprint(caracter)) printf("É um caracter imprimível (incluindo espaço).\n");
    else ("Não é um caracter imprimível (incluindo espaço).\n");

    if (isgraph(caracter)) printf("É um caracer imprimível diferente de um espaço.\n");
    else printf("Não é um caracer imprimível diferente de um espaço.\n");

    return 0;
}
