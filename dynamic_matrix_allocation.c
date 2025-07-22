#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int **matris;
int satir, kolon;
int s, k;
int i;

matris = (int **) calloc(10, sizeof(int));


for(i = 0; i < 10; i++)
{
matris[i] = (int *) calloc(10, sizeof(int));
}

srand(time(NULL));
for(s = 0; s < 10; s++)
{
for(k = 0; k < 10; k++) {
matris[s][k]=rand()%2;
}
}

printf("\nMatris:\n");

for(s = 0; s < 10; s++) {
for(k = 0; k < 10; k++){
printf("%4d", matris[s][k]);

printf("\t");
}
printf("\n");
}

for(i = 0; i < satir; i++)
free((void *) matris[i]);


free((void *) matris);
return 0;
}