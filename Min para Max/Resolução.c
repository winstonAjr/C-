#include <stdio.h>
int main(void){
    char cod[31];

    printf("Min to Max\n");
    printf("Digite o que quer para ser colocado para maiusculo\n");
    scanf(" %30[^\n]", cod );

    for(int i = 0;i < 31; i++){
        if(cod[i] >= 97 && cod[i] <= 122 ){
            cod[i]-=32;
        }
    }printf("%s", cod);

    return 0;
}