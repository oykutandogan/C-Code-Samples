#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE] = {2, 3, 6, 7, 8, 19, 45, 67, 78, 79};
    int b[SIZE] = {1, 2, 4, 5, 7, 9, 10, 18, 33, 47};
    int c[SIZE + SIZE];
    int k;
    int index1 = 0, index2 = 0;
    
    int *pa = &a[0];
    int *pb = &b[0];
    
    for (k = 0; k < SIZE + SIZE; ++k)
        if (index1 == SIZE){
        c[k] = *(pb+k);
        index2++ ;}
        else if (index2 == SIZE){
        c[k] = *(pa+k);
        index1++ ;}
        else {
            if (*(pa+k) < *(pb+k)){
            c[k] = *(pa+k);
            index1++ ;}
            else{
            c[k] = *(pb+k);
            index2++ ;   
            }}
    for (k = 0; k < SIZE + SIZE; ++k)
    printf("%3d ", c[k]);}