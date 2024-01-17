#include <stdio.h>
// Question 1
// int main(){

//     char a;
//     printf("Enter a Character - ");
//     scanf("%c",&a);
//     printf("You habe entered %c", a);
//     return 0;
// }

// Question 2

// int main(){
//     int num1;
//     float num2,sum;
    
//     printf("Enter your 1st number : ");
//     scanf("%d",&num1);
//     printf("Enter your second number : ");
//     scanf("%f",&num2);
//     sum = num1 + num2;
//     printf("The sum = %f",sum);
// }


// Question 3

int main(){

    int P;
    float R,n,SI;

    printf("Enter the Principal amount - ");
    scanf("%d",&P);
    printf("Enter the Rate of Interest - ");
    scanf("%f",&R);
    printf("Enter the number of years - ");
    scanf("%f",&n);

    SI = (P*R*n)/100;

    printf("The Simple Interest is : %f",SI);
    return 0;
}
