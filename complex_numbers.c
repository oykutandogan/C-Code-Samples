#include <stdio.h>
#include <stdlib.h>


typedef struct karmasik {
int gercel;
int sanal;
}Karmasik;

void oku (Karmasik *); 
void yaz (Karmasik); 
Karmasik topla (Karmasik, Karmasik); 


int main()
{
Karmasik birinci_sayi,ikinci_sayi,toplam;

Karmasik *p;
p = (Karmasik *)malloc(sizeof(Karmasik));

printf("\n 1.Karmasik Sayi Icin:\n");
oku(&birinci_sayi);
printf("\n 2.Karmasik Sayi Icin:\n");
oku(&ikinci_sayi);

printf("\n 1. Karmasik Sayi :" );
yaz(birinci_sayi);
printf("\n 2. Karmasik Sayi : ");
yaz(ikinci_sayi);

toplam=topla(birinci_sayi,ikinci_sayi);
printf("\n Karmasik sayilarin toplami : ");
yaz(toplam);

free(p);
return 0;
}

void oku(Karmasik *girilen_sayi)
{
printf("\n gercel kismi giriniz:\n >> ");
scanf("%d",&girilen_sayi->gercel);
printf(" sanal kismi giriniz:\n >> ");
scanf("%d",&girilen_sayi->sanal);
}

void yaz(Karmasik okunan_sayi)
{
printf("%d+%di\n",okunan_sayi.gercel,okunan_sayi.sanal);
}

Karmasik topla(Karmasik birinci_sayi,Karmasik ikinci_sayi)
{
Karmasik toplam;

toplam.gercel=(birinci_sayi.gercel+ikinci_sayi.gercel);
toplam.sanal = (birinci_sayi.sanal+ikinci_sayi.sanal);

return toplam;
}