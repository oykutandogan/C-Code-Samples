#include <stdio.h> 
   
  int first(int dizi[]) 
  { 
  	int i; 
  	static int j = 1; 
  	printf("\nIstediginiz alanda sizin icin %d numarali koltuk ayrildi.\n", j); 
  	printf("\nFirst class koltuklarin su anki durumu (0 = Bos , 1 = Dolu)\n\n"); 
  	for (i = 0; i < 5; i++) 
  	{ 
  		dizi[j - 1] = 1; 
  		printf("%d. koltuk : %d - ", i + 1, dizi[i]); 
  	} 
  	printf("\n\n"); 
  	j++; 
  	if (dizi[4] == 1) 
  	{ 
  		printf("First class koltuklarda yer kalmamistir\n\n"); 
  		return 0; 
  	} 
  	 
  } 
   
  void economy(int dizi[]) 
  { 
  	int i; 
  	static int k = 1; 
  	printf("\nIstediginiz alanda sizin icin %d numarali koltuk ayrildi.\n", k); 
  	printf("\nEconomy koltuklarin su anki durumu (0 = Bos , 1 = Dolu)\n\n"); 
  	for (i = 5; i < 10; i++) 
  	{ 
  		dizi[k + 4] = 1; 
  		printf("%d. koltuk : %d - ", i + 1, dizi[i]); 
  	} 
  	printf("\n\n"); 
  	k++; 
  	if (dizi[9] == 1) 
  	{ 
  		printf("Economy koltuklarda yer kalmamistir\n\n"); 
  	} 
  } 
   
  int main() 
  { 
  	int secim, koltukDurumlari[10] = { 0 }, i; 
  	printf("\n\tFirst class icin 1\n"); 
  	printf("\tEconomy icin 2 giriniz.\n\n\n"); 
  	printf("Simdi seciminizi yapiniz : "); 
  	scanf("%d", &secim); 
  	switch (secim) 
  	{ 
  	case 1: 
  	{ 
  		int yeniSecim; 
  		for (i = 0; i < 10; i++) 
  		{ 
  			first(koltukDurumlari); 
  			x: printf("Simdi yeniden seciminizi yapiniz : "); 
  			scanf("%d", &yeniSecim); 
  			if (yeniSecim == 1) 
  			{ 
  				continue; 
  			} 
  			else if (yeniSecim==2) 
  			{ 
  				economy(koltukDurumlari); 
  				goto x; 
  			} 
  		} 
  		break; 
  	} 
  	case 2: 
  	{ 
  		int yeniSecim; 
  		for (i = 0; i < 10; i++) 
  		{ 
  			economy(koltukDurumlari); 
  			printf("Simdi yeniden seciminizi yapiniz : "); 
  			scanf("%d", &yeniSecim); 
  			if (yeniSecim == 2) 
  			{ 
  				continue; 
  			} 
  			else if (yeniSecim==1) 
  			{ 
  				first(koltukDurumlari); 
  				goto x; 
  			} 
  		} 
  		break; 
  	}}}