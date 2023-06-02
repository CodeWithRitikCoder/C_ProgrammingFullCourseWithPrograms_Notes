//Write a program to ------------ with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"string.h"
int main(){
    printf("Simple sinppit for C programming\n");
    FILE *fptr= NULL;
    fptr= fopen("myFile.txt", "r");
    if(fptr== NULL){
        printf("Some error found while opening a file.");
        // exit(1);
    }else{
        char string[50];

        //First way to read data from the file by reading one by one character at a time.
        /*char ch;
        while(!feof(fptr)){
        ch= fgetc(fptr);
        printf("%c", ch);
        }
        */

        //First way to read data from the file by reading whole data at a time.
        while(!feof(fptr)){
        fgets(string, 50, fptr);
        printf("%s", string);
        }
    }
    
    //getch();
    return(0);
}