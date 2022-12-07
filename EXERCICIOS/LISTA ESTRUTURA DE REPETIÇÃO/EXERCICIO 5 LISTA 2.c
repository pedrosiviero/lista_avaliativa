#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    for(num = 0; num < 100; num++){
        if(num % 2 == 0){
           printf("%d ", num);
        }
    }
    printf("Fim");

}
