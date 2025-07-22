#include<stdio.h>
#include<stdlib.h>

int main(){
 char **matris;
 int satir,sutun;
 int s1,s2,i;

 printf("Matrisin satir sayisini giriniz :\n");
 scanf("%d",&satir);

 printf("Matrisin sutun sayisini giriniz :\n");
 scanf("%d",&sutun);

 matris=(char **)malloc(satir*sizeof(int));
 for(i=0;i<satir;i++)
  matris[i]=(char *)malloc(sutun*sizeof(int));
 for(s1=0;s1<satir;s1++)
  for(s2=0;s2<sutun;s2++){
   printf("Matrisin elemanlarini giriniz :matris[%d][%d]=",s1,s2);
   scanf("%s",&(matris[s1][s2]));
 }

 printf("Girilen matris :\n");

 for(s1=0;s1<satir;s1++){
  for(s2=0;s2<sutun;s2++)
  printf("%2c",matris[s1][s2]);
  printf("\n");
 }

 int arr[5];
 for(i=0;i<5;i++){
    scanf("%d", &arr[i]);
 }
 printf("%d", arr[0]);
 for(i=0;i<5;i++){
    printf("%c", matris[(arr[i]/10)-1][(arr[i]%10)-1]);
 }

 free(matris);
 return 0;
}