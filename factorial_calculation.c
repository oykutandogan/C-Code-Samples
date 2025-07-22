#include <stdio.h>

int main(){

  int i = 0, faktoriyel = 1, sayi = 0;

  fprintf(stdout, "Sayi giriniz: ");
  fscanf(stdin, "%d", &sayi);

  for(i = 2; i <= sayi; i++){
    faktoriyel *= i;
  }

  fprintf(stdout, "%d", faktoriyel);

  return 0;
}