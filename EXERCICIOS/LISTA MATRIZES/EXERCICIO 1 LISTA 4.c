#include <stdio.h>

long matriz[4][4], menor;
int i, j, pos_i, pos_j;
for(i=0; i<4; i++)
{
  for(j=0; j<4 ;j++)
  {
    if(j==0 && i==0)
    {
      menor=matriz[i][j];
      pos_i=i;
      pos_j=j;
    }
    else
    {
      if(matriz[i][j]<menor)
      {
        menor=matriz[i][j];
        pos_i=i;
        pos_j=j;
      }
    }
  }
}
