#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
 float x;
 int matris[10][10],a,i,j;

for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
matris[i][j]=rand()%2;
printf("%d\t",matris[i][j]);
}
printf("\n");
}
printf("\n");   
int dizi[3][3] = {0,1,0,0,1,0,1,1,1};
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d\t",dizi[i][j]);}
printf("\n");}

int yuzde=0, baslangic = matris[0][0];


for (i = 0; i < 3; i++)
{
        for (j = 0; j < 3; j++)
        {
                if (matris[i][j] == dizi[i][j])
                yuzde = yuzde +1;
        }
}
printf("\n%d",yuzde);
}