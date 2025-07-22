#include <stdio.h>

double pow(double x, int n);

int main(void){
	double x;
	int n;
	
	printf(" x : , n :");
	scanf("%lf%d,&x,&n");
	
	
	printf("pow(%f,%d)=%f\n",x,n,pow(x,n));
	
	return 0;
}

double pow(double x, int n){
	if(n == 0)
	return 1;
	else
	return x*pow(x,n-1);
}