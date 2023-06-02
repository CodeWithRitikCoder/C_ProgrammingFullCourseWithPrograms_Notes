//Write a program to insert data into the file by using append mode in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Data inserting into the file by using Append mode in C programming\n");
    FILE *fptr= NULL;
    
    fptr= fopen("myFile.txt", "a");
    if(fptr== NULL){
        printf("File is not found.");
    }else{
        char string[50];
        printf("Enter your string here : ");
        gets(string);
        fprintf(fptr, "%s\n", string);
        printf("Data have been inserted successfully. into the file.");

        fclose(fptr);
    }
    
    //getch();
    return(0);
}