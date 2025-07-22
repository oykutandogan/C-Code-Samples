#include <stdio.h>
#include <time.h>    
#include <string.h>  
#include <stdlib.h>
#define sure 36 
struct Hisse_senedi {
    char ad[20];
    float gunlukdeger;
    int gun, ay, yil;
};
typedef struct Hisse_senedi hisse;
enum {CIKIS,TESLA,ASELSAN,AKBANK};
void hisse_miktarlari_belirleme(hisse[], char[]);
void hisse_miktarlari_goster(hisse[]);
void yatirim(struct Hisse_senedi[], int);
int main() {
    hisse TSLA[sure] = {0}, ASELS[sure] = {0}, AKBNK[sure] = {0};
    srand(time(NULL));
    int secim, sec, gun;
    hisse_miktarlari_belirleme(TSLA, "Tesla");
    hisse_miktarlari_belirleme(ASELS, "Aselsan");
    hisse_miktarlari_belirleme(AKBNK, "Akbank");
    while (1)
    {

        printf("\n\n\t1-Hisse miktarlarini goster\n\t2-aylik yatirim\n\t3-Haftalik yatirim\n\t4-cıkıs için 0 a basiniz\n\nsecim : ");
        scanf("%d", &secim);
        printf("\n\n");
        if (secim == 0)
            break;
        if (secim == 1) {
            printf("\n\t1-Tesla\n\t2-Aselsan\n\t3-Akbank\n\t4-cıkıs icin 0 a basınız.\n\nsecim : ");
            scanf("%d", &sec);
            printf("\n\n");
            while (1) {
                if (sec == CIKIS)
                    break;
                else if (sec == TESLA) {
                    hisse_miktarlari_goster(TSLA); break;
                }
                else if (sec == ASELSAN) {
                    hisse_miktarlari_goster(ASELS); break;  
                }
                else if (sec == AKBANK) {
                    hisse_miktarlari_goster(AKBNK); break;  
                }
                else {
                    while (1) {
                        printf("\nhatali kodlama tekrar deneyiniz veya cıkmak isin 0 a basiniz.");
                        scanf("%d", &sec);
                        if (sec == TESLA || sec == ASELSAN || sec == AKBANK || sec == CIKIS)
                            break;
                    }
                }
            }
        }
        else if (secim == 2 || secim == 3) {
            printf("\n\t1-Tesla\n\t2-Aselsan\n\t3-Akbank\n\t4-cıkıs icin 0 a basınız.\n\nsecim : ");
            scanf("%d", &sec);
            printf("\n\n");
            if (secim == 2)
                gun = 30; 
            else
                gun = 7; 
            while (1) {
                if (sec == CIKIS)
                    break;
                else if (sec == TESLA) {
                    yatirim(TSLA, gun); break;  
                }
                else if (sec == ASELSAN) {
                    yatirim(ASELS, gun); break;  
                }
                else if (sec == AKBANK) {
                    yatirim(AKBNK, gun); break; 
                }
                else {
                    while (1) {
                        printf("hatali kodlama tekrar deneyiniz veya cıkmak isin 0 a basiniz.");
                        scanf("%d", &sec);
                        if (sec == TESLA || sec == ASELSAN || sec == AKBANK || sec == CIKIS)
                            break;
                    }
                }
            }
        }
        else {
            while (1) {
                printf("\nhatali kodlama tekrar deneyiniz veya cıkmak isin 0 a basiniz.\nsecim:");
                scanf("%d", &secim);
                if (secim == 1 || secim == 2 || secim == 3 || secim == CIKIS)
                    break;
            }
        }
    }
    printf("program sonlandi.\n\n");
}
void hisse_miktarlari_belirleme(hisse a[], char ad[]) {
    int i;
    a[0].yil = 2022;
    a[0].ay = 1;
    a[0].gun = 1;
    a[0].gunlukdeger = rand() % 500 + 500;
    strcpy(a[0].ad, ad);
    for (i = 1; i < sure; i++) {
        if (a[i - 1].gun == 29) {
            a[i - 1].gun = 1; 
            a[i - 1].ay += 1;
        }
        a[i].gunlukdeger = rand() % 1000 + 500 + rand() % 100 * 0.01; 
        a[i].gun = a[i - 1].gun + 1;
        a[i].ay = a[i - 1].ay;
        a[i].yil = a[i - 1].yil;
        strcpy(a[i].ad, ad);
    }
}
void hisse_miktarlari_goster(hisse a[]) {
    int i;
    for (i = 0; i < sure; i++) {
        printf("%s:\t\t%.2f\t\t%d/%d/%d\n", a[i].ad, a[i].gunlukdeger, a[i].gun, a[i].ay, a[i].yil);
    }
}
void yatirim(hisse a[], int s) {
    int i, j, f, alis, satis, enbfark = 0;
    for (i = 0; i < s; i++) {
        for (j = i + 1; j < s; j++) {
            f = a[j].gunlukdeger - a[i].gunlukdeger;
            if (f > enbfark) {
                enbfark = f;
                alis = i;
                satis = j;
            }
        }
    }
    hisse_miktarlari_goster(a);
    printf("\n\n%s adli hisse %d/%d/%d tarihinde alinip %d/%d/%d tarihinde satilirsa en buyuk kar elde edilir.\nKar miktari : %.2f TL\nYatirim suresi: %d gun\n\n", 
    a[0].ad, a[alis].gun, a[alis].ay,a[alis].yil, a[satis].gun, a[satis].ay, 
    a[satis].yil,a[satis].gunlukdeger-a[alis].gunlukdeger,satis-alis);
}