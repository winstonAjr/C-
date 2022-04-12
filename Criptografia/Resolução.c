#include <stdio.h>

int main(void){
    
    char cod[31];
    int x;

    printf("CODIFICADOR\n");
    printf("[1] Codificar uma mensagem\n[2] Decodificar uma mensagem\n");
    scanf("%d", &x);

    if (x == 1){
        printf("Digite o que quer codificar\n");
        scanf(" %30[^\n]", cod );
        for(int i = 0;i < 31; i++){
            if(cod[i] == '\0'){
                break;
            } cod[i]+=1;
        }
    }
    else if (x == 2){
    printf("Digite o que quer decodificar\n");
    scanf(" %30[^\n]", cod );
    for(int i = 0;i < 31; i++){
        if(cod[i] == '\0'){
            break;
        }cod[i]-=1;
        }
    }else{
        printf("Erro!!!");
    }
    printf("\n%s", cod);

    return 0;
}