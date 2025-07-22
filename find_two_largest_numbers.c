#include <stdio.h>

int main(){
	
	int sayi = 0,max,max2,sayac=1;
	
	max=sayi;
	
	while (sayac <=10){
		printf("%d .sayi : ",sayac);
		scanf("%d",&sayi);
		if(sayi> max){
			max2=max;
			max=sayi;
		}
		else if (sayi>max2){
			max2=sayi;
		}
			sayac++;
	}
	
printf("max sayi : %d \n",max);
printf("2.max sayi : %d",max2);	
	
}