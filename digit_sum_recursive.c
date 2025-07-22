#include <stdio.h>

int main(){
    int sayi,x ;
    printf(" Bir tam sayı girin : ");
    scanf("%d",&sayi);
    x=rakamtopla(sayi);
    printf("%d sayısının rakamları toplamı : %d",sayi,x);
    return 0;
}

int i,s ;
int rakamtopla(int sayi){
    if(sayi){
        i=sayi%10;
        s=s+i;
        rakamtopla(sayi/10);
    }
    else
    return s;
}