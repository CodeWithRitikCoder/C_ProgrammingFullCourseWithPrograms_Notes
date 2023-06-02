//Write a program to Dynamic Allocation with Calloc function in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"//It contains decalaration of DMA Functions.
int main(){
    printf("Dynamic Allocation with Calloc function in C programming\n");

    //use of realloc function of DMA.
    int n, *ptr;
    printf("Enter the sizeof of your to create Dynamic array : ");
    scanf("%d", &n);
    ptr= (int *) calloc(n, sizeof(int));
    for(int i= 0; i< n; i++){
        printf("Enter the value at %d is : ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i= 0; i< n; i++){
        printf("The value at index of %d is : %d\n", i, ptr[i]);
    }

    //use of realloc function of DMA.
    printf("Enter the sizeof of your to create new Dynamic array : ");
    scanf("%d", &n);
    ptr= (int *) realloc(ptr, n* sizeof(int));
    for(int i= 0; i< n; i++){
        printf("Enter the value at %d is : ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i= 0; i< n; i++){
        printf("The new value at index of %d is : %d\n", i, ptr[i]);
    }
    free(ptr);
    //That's all about DMA_wiht Realloc memory allocation.

    //getch();
    return(0);
}