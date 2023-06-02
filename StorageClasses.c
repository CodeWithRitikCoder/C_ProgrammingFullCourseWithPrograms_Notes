//Write a program to Use Storage classes in C with RitikCoder.
#include"stdio.h"
#include"conio.h"

int sum;
int fun1(int a, int b){
    extern int sum;
    return (a+ b);
}
int staticFun(){
    static int stativVariable;
    printf("Ther value of staticVariable is : %d\n", stativVariable);
    stativVariable++;
}
int main(){
    printf("Storage classes in C programming\n");
    /*What is a Storage calss in C programming language ?
        *A storage class defines scope, default initial value and lifetime of a variable in C.
    *-> A storage class defines following attributes about a variable in C.
        i-> Scope.
            *-> What is Scope ?
                *-> the means of scope (where will this variable be availabel in a function or whole C program).
        ii-> Default initial value.
            *-> what is default inital value ?
                *-> default inital value is if we don't define the variable explicitly if we don't initialize the variable explicitly then what will be the default initialize value inside that variable.
        iii-> Lifetime.
         *-> what is Lifetime ?
            *-> Life of that variable. it means (till the varaible is live.).

    * There are four types of Storage classes in C programming.
        *-> In C programming language, following storage classes are most oftenly used:
            i-> Automatic variable.
            ii-> Exgernal variable.
            iii-> Static variable.
            iv-> Register variable.

        * Automatic variables: Auto storage class.
            *-> Scope: Local to the function body they are defined in.
            *-> Default initial value: Garbage value (a random value).
            *-> Lifetime: Till the end of the function block they are defined in.
                *-> int Ritik and auto int Ritik are same.
        
        * External variable: External storage class.
            *-> They are same as global variables.
            *-> Scope: Global to the program they are defined in.
            *-> Default initial value: 0.
            *-> Lifetime: These variables are decalred outside any function. They are available thorought the lifetime of the program.
            *-> A global variable can be changed by any function in the program.
            *-> int Ritik written outside any function will tell the compiler that Ritik is a global variable.
            *-> It is recommanded to minimize the use of unnecessary global variables in a program.
                *External variable: Extern keyword.
                    *-> Extern keyword is used to inform our C compile that a given variable is declared somewhere else.
                    *-> Using extern will not allocated space for the variable.
        
        * Static variable: Static storage class.
         *-> Scope: Local to the block they are defined in.
         *-> Default initial value: 0.
         *-> Lifetime: They are available though out the lifetime of the program.
         *-> A static variable remains under existence for use within the function for entire program run.
         *-> static in Ritik written inside any function will tell the compiler that Ritik is a static variable.
         *-> It is recommended to minimize the use of unnecessary static variables in a program. 

        *Register variable: Register storage class.
            *-> Scope: Local to the function they are declared in.
            *-> Default intial value: Garbage value.
            *-> Lifetime: They are availabee till the end of the function block, in which the variable is defined.
            *-> Register variables requests the compiler to store the variable in the CPU register instead of storing in the memory to have faster access.
            *-> Generally this is done for the variables which are being used frequently.
    */
    int a= 5;
    printf("This is my Auto variable a's Value is : %d\n", a);
    int n= fun1(3, 4);
    printf("This is my Extern variable b's Value is : %d\n", n);
    staticFun();
    staticFun();
    staticFun();
    register int reg= 5;
    printf("Ther value of register variable reg is : %d\n", reg);
    
    //getch();
    return(0);
}