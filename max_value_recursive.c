#include<stdio.h>
#define MAX 100

int enbuyukbul(int []);
int size;

int main()
{
    int arr[MAX], max, i;
    printf("\n Dizi büyüklüğü girin : ");
    scanf("%d", &size);
    printf("\n %d eleman girin \n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = enbuyukbul(arr);  
    printf("\nDizinin en büyük elemanı :  %d\n", max);
    return 0;
}

int enbuyukbul(int a[])
{
    static int i = 0, max =- 9999;  
    if(i < size)   
    {
        if(max < a[i])
        max = a[i];

        i++;    
        enbuyukbul(a);   
    }
    return max;
}