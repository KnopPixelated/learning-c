#include <stdio.h>
#include <stdlib.h>

// ESTRUTURAS DE DECISÃO

int main(){

    int x;
    scanf("%d", &x);

    if(x%2 == 1){
       printf("O valor inserido e impar");

    }
    if(x%2 == 0){
        printf("O valor inserido e par.");

    }

    return 0;
}
