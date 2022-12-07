#include <stdio.h>

int main()
{
    int matriz[4][4], contagem = 0;
   
    for(int linha=0; linha<4; linha++)
    {
        for(int coluna=0; coluna<4; coluna++)
        {
            printf("%dª linha, %dª coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
   
    for(int linha=0; linha<4; linha++)
        for(int coluna=0; coluna<4; coluna++)
            if(matriz[linha][coluna] < 0)
                contagem++;
 
 
    printf("\n\n Existem na matriz %d números menores que 0.", contagem);
   
    return 0;
}
