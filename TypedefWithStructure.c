//Write a program to Use Typedef with structure in C with RitikCoder.
#include"stdio.h"
#include"conio.h"

//Here it is my global structure.
typedef struct student {//Here the main use typedef keyword.
    int id;
    //and so on....
} std;
std s1;//we can create structure variable after using typedef keyword.
struct student s2;//we can also create strcucture a variable like this.

int main(){
    printf("Typedef with structure C programming\n");
    s1.id= 5;
    printf("Ther id of s1 is : %d\n", s1.id);
    s2.id= 34;
    printf("Ther id of s2 is : %d\n", s2.id);
    
    //getch();
    return(0);
}