//Write a program to use Arrays in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Arrays in C programming\n");
    /*What is an Array in C programming.
    * An array is a collection of data items of the same type.
    * it is used to stored at contigious memory location.
    * it can also store the collection of derived data types, such as pointer, structures and so on...
    * and arrays have limit of array dimensional in C programming.
    * 1. -> A one-dimensional array is like a list.
    * 2. -> A two-dimensional array is like a table.
    * and so on.... dimensions.
    * 
    * and code that arrays is sometimes more orginized and readable.
    * and It is used to represent multiple data items of some types by using only single name.
    * Accessing an items in a given array is very fast by indexing of the array. 
    */
    //Let's code to know more about Arrays in C programming.
    //There are two ways to create an array in C programming.
    //1. -> int arr1[4]; //this is called array declaration.
    //2. -> int arr1[4]= {2, 4, 5, 23}; //this is called array declaration with initialization.
    int arr[4];
    arr[0]= 2;
    arr[1]= 4;
    arr[2]= 5;
    arr[3]= 23;
    printf("It's an one-dimensional array.\n\n");
    for(int i= 0; i<= 3; i++){
        printf("The value arr1 at index %d is : %d\n", i, arr[i]);
    }
    //this is called one-dimensional array.
    //and also we can get stored array values by taking from the use using loops.

    //two-dimensional array in C programmin.
    int arr2[2][4]= {{3, 5, 7, 4}, {1, 6, 2, 8}};
    printf("\nIt's an two-dimensional array.\n\n");
    for(int i= 0; i<= 1; i++){
        for(int j= 0; j<= 3; j++){
            printf("The value of arr2 at indext %d, %d is : %d\n", i, j, arr2[i][j]);
        }
    }
    
    //getch();
    return(0);
}