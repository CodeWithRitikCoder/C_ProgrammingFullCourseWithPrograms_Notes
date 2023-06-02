//Write a program to Solve Exercise No.2 with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    /* Solve these conversions in Exercise No.2.
    Converison No.1 -> kms to miles.
    Converison No.2 -> inches to foot.
    Converison No.3 -> cms to inches.
    Converison No.4 -> pound to kgs.
    Converison No.5 -> inches to meters.
    */
    //Solution of Exercise NO.2
    printf("Solution of Exercise No.1 in C programming\n");
    int input;
    float kmsToMiles= 0.621371;
    float inchesToFoot= 0.0833333;
    float cmsToInches= 0.393701;
    float poundToKgs= 0.453592;
    float inchesToMeters= 0.0254;
    while(1){
    printf("1. press one to conversion kms to miles.\n");
    printf("2. press two to conversion inches to foot.\n");
    printf("3. press three to conversion cms to inches.\n");
    printf("4. press four to conversion pound to kgs.\n");
    printf("5. press five to conversion inches to meters.\n");
    printf("6. press five to quite conversion.\n");
    printf("\tEnter what did you choose :- ");
    scanf("%d", &input);
    switch(input){
        float num;
        case 1: {
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &num);
            printf("\n%0.4f kms is equals to %0.4f Miles\n\n", num, (num* kmsToMiles));
            break;
        }
        case 2: {
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &num);
            printf("\n%0.4f inches is equals to %0.4f foot\n\n", num, (num* inchesToFoot));
            break;
        }
        case 3: {
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &num);
            printf("\n%0.4f cms is equals to %0.4f inches\n\n", num, (num* cmsToInches));
            break;
        }
        case 4: {
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &num);
            printf("\n%0.4f pound is equals to %0.4f kgs\n\n", num, (num* poundToKgs));
            break;
        }
        case 5: {
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &num);
            printf("\n%0.4f inches is equals to %0.4f meters\n\n", num, (num* inchesToMeters));
            break;
        }
        case 6: {
            goto end;
            break;
        }
        default : {
            printf("\nYou have selected Invalid option!\n\n");
            break;
        }
    }
    }
    end:
    //Here I solved my Exercse No.2 in C programming.
    
    //getch();
    return(0);
}