#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//4.

int main(){
    
    srand(time(NULL));
    
    int zar1, zar2,toplam[3600];
    
    for(int i = 0; i < 3600; i++){
       
        zar1 = 1+(rand()%6);
        zar2 = 1+(rand()%6);
        printf("Zar1 : %d ve Zar2 : %d \n",zar1,zar2);
        
        toplam[i] = zar1 +zar2 ;
    }
     for(int i = 0; i < 3600; i++){
        printf("toplam : %d\n",toplam[i]);
}
    return 0;
}