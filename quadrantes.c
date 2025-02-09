#include <stdio.h>
#include <stdlib.h>

int main(){
    // Seu código vai aqui
    int x, y;
    scanf("%d%d", &x,&y);

    if(x>0 && y>0){
        printf("Q1");
    }else if(x<0 && y>0){
        printf("Q2");
    }else if(x<0 && y<0){
        printf("Q3");
    }else if(x>0 && y<0){
        printf("Q4");
    }else{
        printf("eixos");
    }

    return 0;
}

