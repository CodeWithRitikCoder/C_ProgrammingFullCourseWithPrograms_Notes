//Write a program to use command line arguments with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(int argc, char const *argv[])
{
    printf("The value of argc is : %d\n", argc);
    for(int i= 0; i< argc; i++){
        printf("This arguments at index : %d : has value of %s\n", i, argv[i]);
    }
    return 0;
}
