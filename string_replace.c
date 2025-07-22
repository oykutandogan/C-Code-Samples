#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace(char *s,char a,char b){
    
    int i,say=0;
    
    for(i=0;i<10;i++){
        
        if(s[i] == a){
            s[i]=b;
            say++;
        }
    }
    
    printf("değişen sayısı : %d\n",say);
}

int main(){
    int i;
    
    char metin[10]="araba";
    printf("%s\n",metin);
    
    replace(metin,'r','k');
    
    printf("yeni metin : ");
    for(i=0;i<10;i++){
    printf("%c",metin[i]);}
}