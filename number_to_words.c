#include <stdio.h>
#include <stdlib.h>

int main(){
    

    char isim[10][10] = {"sıfır","bir","iki","üç","dört","beş","altı","yedi","sekiz","dokuz"};
    
    int basamak,i,say,rakam;
    
    printf("basamak sayısını giriniz :");
    scanf("%d",&basamak);
    printf("Sayıyı giriniz :");
    scanf("%d",&say);
    
    if(basamak<=6){
    
        for(i=0;i<basamak;i++){
        
        rakam = say%10 ;
        
        printf("%s",isim[rakam]);
        
        say = say/10 ;    
        }}
    else{
    printf("6 basamak ya da azını giriniz.");
    }}