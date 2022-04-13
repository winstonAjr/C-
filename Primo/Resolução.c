#include <stdio.h>
int ehPrimo(int n){
    int e = 1;
    for (int i = 2; i <= n; i++){
        if(n%i == 0){
            e +=1;
        }
    } if (e == 2){
        return 1;
    }else{
        return 0;
    }
}

int main(void){
    int elem[11], primos[11], arr, a = 0;
    for(int i = 0; i <= 10; i++){
        printf("Digite um elemento\n");
        scanf("%d", &arr);
        elem[i] = arr;
        if(ehPrimo(arr) == 1){
            primos[a] = arr;
            a++; 
        }
    }
    printf("\nElementos:\n");
    for(int i = 0; i <= 10; i++){
    printf("[%d]",elem[i]);
    }
    printf("\nPrimos:\n");
    for(int i = 0; i < a; i++){
    printf("[%d]",primos[i]);
    }

    return 0;
}