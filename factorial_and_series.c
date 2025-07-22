#include <stdio.h>

int main(){

	
}

int factorial(){
	int i = 0, faktoriyel = 1, sayi = 0;

  fprintf(stdout, "Sayi giriniz: ");
  fscanf(stdin, "%d", &sayi);

  for(i = 2; i <= sayi; i++){
    faktoriyel *= i;
  }
}

void e(){
	int i,sayi;
	
	for(i=0;i<3;i++){
		
		sayi = 1/factorial(i);
		sayi +=sayi ;
	}
	printf("%d",sayi);
	
}