#include <stdio.h>

// Question 1

// int main(){

//     float mark;

//     printf("Enter your score : ");
//     scanf("%f",&mark);
//     if (mark >= 50){
//         printf("Congrats..you are passed.");
//     }
//     else{
//         printf("Oops..better luck next time.");
//     }
//     return 0;
// }

// Question 2

// int main(){
//     float mark;

//     printf("Enter your score : ");
//     scanf("%f",&mark);
//     if(mark > 89){
//         printf("A grade..");
//     }
//     else if(mark > 79){
//         printf("B   grade....");
//     }
//     else if(mark >69){
//         printf("C grade....");
//     }
//     else if(mark>59){
//         printf("D grade...");
//     }
//     else{
//         printf("Failed.");
//     }
//     return 0;
// }

// Question 3

int main()
{

    int day;
    printf("Enter a number between 1-7 = ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}