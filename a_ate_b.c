#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b;
    scanf("%d%d", &a,&b);

    if(a > b){
        for(int i; b != a ;b = b + 1){

            printf("%d\n", b);

        }
        printf("%d", a);

    }else if(a < b){
        for(int i; a != b ;a = a + 1){

            printf("%d\n", a);

        }
        printf("%d", b);
    }else{
        printf("%d%d",a ,b);
    }

    return 0;
}
