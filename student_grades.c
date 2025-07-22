#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
   char ad[50];
   float sinav;
};

int main()
{ struct ogrenci *ptr;
   int i, n;
   ptr = (struct ogrenci*) malloc(10 * sizeof(struct ogrenci));
   for(i = 0; i < 10; ++i)
   { printf("Ögrencinin adını ve notunu giriniz: ");

       scanf("%s %f", (ptr+i)->ad, &(ptr+i)->sinav);}
   printf("Öğrenci Bilgileri:\n");
   for(i = 0; i < 10; ++i)
       printf("Ad: %s\tNumara: %f\n", (ptr+i)->ad, (ptr+i)->sinav);
    
    float max;
    
    max= (ptr)->sinav;
    for(i=0;i<10;i++){
        
        if (((ptr+i)->sinav) >= max ){
        max = (ptr+i)->sinav ;}
    }
    
    printf("Max not : %f",max);}