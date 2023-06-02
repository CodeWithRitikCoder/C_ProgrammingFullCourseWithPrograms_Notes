#include"stdio.h"
struct student{
    int id;
    char favChar;
}std;
int main(){
    printf("Structure in C programming\n");
    std.id= 1;
    std.favChar= 'R';
    printf("id is : %d\n", std.id);
    printf("favChar is : %c\n", std.favChar);
    //we can also get all these things by the user.
    
    //getch();
    return(0);
}