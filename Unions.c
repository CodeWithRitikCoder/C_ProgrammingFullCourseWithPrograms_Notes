//Write a program to Use Union in C with RitikCoder.
#include"stdio.h"
#include"conio.h"

//Here it is my union.
union student{
    int id;
    int marks;
}std1;
union student std2;//we can also create union varialbe like this.

int main(){
    printf("Union in C programming\n");
    /*What is union in C programming.
        * Union is a user defined data type (vary similar to structure.)
        * The difference between structures and unions lies in the fact that in structure, each member has it's own Storage location, whereas members of a union user a single shared memory location.
        * this single shared memory location is equal to the size of it's largest data member.
    Declaration and Accessing Union members in C programming.
        * like structure, we access any member by using the member access operators(.) in unions.
        * We use keyword union to define a union.
        * Union can't handle all members at once.
        * systax is very similar to structure.
            * union union_name {
            data_type var 1;
            data_type var 2;
            data_type var 3;.....
        }structure_variables;//to accessing members of union using dot(.) operator.

    Let's code some code to know all about structure.       
        */
    // std1.id= 2;
    std1.marks= 98;
    // printf("std1 id is : %d\n", std1.id);
    printf("std1 marks is : %d\n", std1.marks);
    //Union will run only one thing at a time. that's why I have command these two lines.
    
    //getch();
    return(0);
}