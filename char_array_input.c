#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int size,i ;
    char dizi[size], *p ;
    *p=dizi;
    
    printf("Dizinin karakter sayısını giriniz :");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        scanf("%c",&dizi[i]);
        putchar(*(p+i));
    }

int j,index;

for(j=0;j<size ;j++){
    if(*(p+j) == 'a'){
    index++ ;
    printf("Harfin olduğu yerler : %d",*(p+j));}
}}