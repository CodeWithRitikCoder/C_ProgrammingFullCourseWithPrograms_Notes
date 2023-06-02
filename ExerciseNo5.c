//Write a program to solve Exercise No.5 with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Solution of Exercise No.5 in C programming\n");
    /*Print reversal of an array in C programming.
        * like as-> we have an array -> int arr[]= {2, 5, 8, 4, 9, 6};
                                  change this into {6, 9, 4, 8, 5, 2}. like this.
    Let's code to solve this Exercise No.5 in C programming.
    */
    int arr[]= {2, 5, 8, 4, 9, 6};
    printf("This is our main array : ");
    for(int i= 0; i<= 5; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

    //Let's reverse this array.
    int arr1[6];
    for(int i= 0; i<= 5; i++){
        arr1[i]= arr[i];
    }
    printf("\n");

    printf("This is our reverse array : ");
    for(int i= 5; i>= 0; i--){
        arr[i]= arr1[i];
        printf("%d, ", arr[i]);
    }

    //that's all about Exercise- 5.

    //getch();
    return(0);
}