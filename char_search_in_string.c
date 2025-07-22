#include <stdio.h>
#include <stdlib.h>
int main()
{
    //aranan harfin hangi indiste ve kaç kere geçtiğini bulmak için :
    char metin1[50];
    char ara;
   
    int i,adet=0;
    printf("metin giriniz : ");
    gets(metin1);
    
    printf("Hangi harfi arıyorsunuz ? ");
    scanf("%c",&ara);
    
 for(i=0;metin1[i]!='\0';i++)
 {  if (metin1[i]==ara){
        adet++;
        printf("aradığınız karakter metnin %d. indeksindedir. \n",i);}}
   
    printf(" %c degeri %d tane vardir \n",ara, adet);
    
    // aranan harflerin geçtiği indisleri diziye atama
    
    int k,metin2[50];
    for(k=0;metin1[k] != '\0';k++){
        if(metin1[k] == ara){
                metin2[k]= k;
                printf("%d",metin2[k]);
        }
    }

}