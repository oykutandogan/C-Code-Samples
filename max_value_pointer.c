#include<stdio.h>
#include<stdlib.h>
int enbuyuk(int dizi[],int );

int main()
{
    int dizi[]={12,34,67,123,89,34};
    int *p;
    int sayac;
    int n;
    n=sizeof(dizi)/sizeof(int);
    p=dizi;
    printf("Okunan dizi\n");
    for(sayac=0; sayac<n; sayac++)
    {
                 printf("%d \n",*p);
                 p++;
                 }
                
                 printf("En buyuk dizi elemani = %d\n",enbuyuk(dizi,n));
                 }

int enbuyuk(int a[],int length)
{
     int max;
     max=a[0];
     int i;
     for(i=0; i<length; i++)
     if(a[i]>max)
     max=a[i];
     return max;
}