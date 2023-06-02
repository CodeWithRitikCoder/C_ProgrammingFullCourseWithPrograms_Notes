//Write a program to solve Exercise No.5 using 2 metods with RitikCoder.
#include"stdio.h"
#include"conio.h"

//array reversal function is here.
void fun_ArrayReversal(int arr[]){
    for(int i= 0; i< 6/2; i++){
        int temp;
        temp= arr[i];
        arr[i]= arr[5- i];
        arr[5- i]= temp;
    }
}

int main(){
    printf("Solution of Exercise No.5 using second method in C programming\n");
    /*Print reversal of an array in C programming.
        * like as-> we have an array -> int arr[]= {2, 5, 8, 4, 9, 6};
                                  change this into {6, 9, 4, 8, 5, 2}. like this.
    Let's code to solve this Exercise No.5 in C programming.
    */
    int arr[]= {2, 5, 8, 4, 9, 6};
    //Array before reversal.
    printf("This is our array befor reversal : ");
    for(int i= 0; i<= 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Array after reversal.
    fun_ArrayReversal(arr);
    printf("This is our array after reversal : ");
    for(int i= 0; i<= 5; i++){
        printf("%d ", arr[i]);
    }


    //that's all about Exercise- 5 using second method .

    //getch();
    return(0);
}