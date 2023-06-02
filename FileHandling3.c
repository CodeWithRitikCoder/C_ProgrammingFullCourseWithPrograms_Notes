//Write a program to write and reading using fputc(); and fgetc(); with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("writting using fputc(); C programming\n");
    FILE *fptr= NULL;
    fptr= fopen("Myfile1.txt","a+");
    if(fptr== NULL){
        printf("File is not opened because of some error.");
    }else{
        printf("File opened successfully\n");
        // fputc('R', fptr);//writing into file character wise.
        char a= fgetc(fptr);//reading from file character wise.
        printf("%c", a);
    }
    fclose(fptr);
    
    //getch();
    return(0);
}