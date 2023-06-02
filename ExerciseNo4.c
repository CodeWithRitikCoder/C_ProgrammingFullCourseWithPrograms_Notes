//Write a program to solve Exercise No.4 with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Solution of Exercise No.4 in C programming\n");
    /*Print the following star pattern in C programming using for loop.
        (i)-> *
              *  *
              *  *  *
              *  *  *  *
              *  *  *  *  *
              
        (ii)-> *  *  *  *  *
               *  *  *  *
               *  *  *
               *  * 
               * 
    Let's code to solve this Exercise No.4 in C programming.
    */
    //Printing of first star pattern.
    int n;
    printf("Enter 1 for first pattern and 2 for second pattern : ");
    scanf("%d", &n);
    switch(n){
        case 1:{
            printf("This is our first star pattern\n");
            for(int i= 0; i<= 4; i++){
                for(int j= 0; j<= i; j++){
                    printf("*  ");
                }
                printf("\n");
            }
            break;
        }
        case 2:{
            printf("This is our second star pattern\n");
            for(int i= 0; i<= 4; i++){
                for(int j= 4; j>= i; j--){
                    printf("*  ");
                }
                printf("\n");
            }
            break;
        }
        default :{
            printf("This have entered invalid option!");
            break;
        }
    }

    //that's all about Exercise- 4.

    //getch();
    return(0);
}