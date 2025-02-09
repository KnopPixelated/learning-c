#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    int acessos;
    int ateMilhao = 0;
    int contadorMilhao = 0;

    for(int i = 1; i <= n; i++){
        scanf("%d", &acessos);
        ateMilhao = acessos + ateMilhao;

        if(ateMilhao >= 1000000 && contadorMilhao == 0){
            contadorMilhao = i;
        }
    }
    printf("%d", contadorMilhao);
    return 0;
}

