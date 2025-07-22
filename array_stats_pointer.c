#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void islem(int dizi[],int *max , int *min ,float *ort){
    int i ;
    *max = *min = dizi [0] ;
    for (i=0 ; i<SIZE ; i++){
        *ort += dizi[i] ;
        if (*min > dizi[i])
        *min = dizi[i];
        if (*max <dizi[i])
        *max = dizi[i];
    }
    *ort /= SIZE ;
} 

int main(){
    int dizi[SIZE],j,max,min ;
    float ort ;
    srand(time(0));
    for(j=0 ; j<SIZE ; j++){
        dizi[j]=rand()%50 ;
        printf("%2d \n",dizi[j]);
    }
    
    islem(dizi,&max,&min,&ort);
    printf("Dizinin en büyük sayısı : %d \n",max);
    printf("Dizinin en küçük sayısı : %d \n",min);
    printf("Dizinin ortalaması : %f \n",ort);
    return 0;
}