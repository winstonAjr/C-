#include <stdio.h>
#include <string.h>

int main(void){
    char prt1[40], prt2[40];

    printf("Digite a parte 1 da sua mensagem\n");
    scanf(" %[^\n]", prt1);

    printf("Digite a parte 2 da sua mensagem\n");
    scanf(" %[^\n]", prt2);

    strcat(prt1, prt2);

    printf("%s", prt1);
    return 0;
}