#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Metin{
    
    char tammetin[20];
    char sesli[15];
    char sessiz[15];
    int sayi[5];
    int uzunluk;
}

main(){
    
    struct Metin met;
    printf("Metni giriniz : \n");
    gets(met.tammetin);
    puts(met.tammetin);
    
    
    met.uzunluk=strlen(met.tammetin);
    printf("metnin uzunluğu = %d \n",met.uzunluk);
    
    
    char sesli_harf[] = {'a','e','i','o','u'};
    int i,j,k;
    
    for(i=0;i<met.uzunluk;i++){
        for(j=0;j<5;j++){
        if(met.tammetin[i] == sesli_harf[j]){
                met.sesli[i] = sesli_harf[j];
}}}

int l;
printf("metindek sesli harfler :");
for(l=0;l<strlen(met.sesli);l++)
printf("%c \t",met.sesli[l]);
printf("\n");


char sessiz[20]= {"zyvtşsrpnrmlkhjğgdçcb"};


    for(i=0;i<met.uzunluk;i++){
        for(j=0;j<5;j++){
        if(met.tammetin[i] == sessiz[j]){
                met.sessiz[i] = sessiz[j];
}}}


printf("metindek sessiz harfler :");
for(l=0;l<strlen(met.sessiz);l++)
printf("%c \t",met.sessiz[l]);


}