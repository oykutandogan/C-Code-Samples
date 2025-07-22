#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int degerata(int min,int max,int satir,int sutun,int dizi[satir][sutun]){
    
    srand(time(NULL));
    
    int i,j,a;
    
    
    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            a= rand()%100;
            if( a<max && a>min ){
                dizi[i][j] = a ;
            }

printf("Girilen matris :\n");
for(i=0;i<satir;i++){
 for(j=0;j<sutun;j++)
 printf("%2d",dizi[i][j]);
    printf("\n");
}}}}

int maxbul(int satir,int sutun,int dizi[satir][sutun]){
    
    int i,j,max=0;
    int arr[3];
    
     for(i=0;i<3;i++){
 for(j=0;j<3;j++){
    
     if(dizi[j][i]>max)
    max=dizi[j][i];}
    
     arr[i]=max;}
    
    printf("max : ") ;
    for(i=0;i<3;i++) 
    printf("%d \t",arr[i]) ;
}

int main(){

int satir,sutun;
int min,max;

printf("Min değer :\n");
scanf("%d",&min);

printf("Max değer :\n");
scanf("%d",&max);


printf("Matrisin satir sayisini giriniz :\n");
scanf("%d",&satir);
printf("Matrisin sutun sayisini giriniz :\n");
scanf("%d",&sutun);

int dizi[satir][sutun];

 
 degerata(min,max,satir,sutun,dizi);
 maxbul(satir,sutun,dizi);

}
