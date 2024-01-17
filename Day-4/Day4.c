#include <stdio.h>

// /Question 1

// int main(){
//     int num,sum;
//     printf("Enter a number - ");
//     scanf("%d",&num);

//     for (int i = 1; i <= 10; i++)
//     {
//         sum = i*num;
//         printf("%d * %d = %d", i,num,sum);
//         printf("\n");
//     }
//     return 0;
// }

// Question 2

// int main(){

//     int limit,temp = 0;
//     printf("Enter the limit - ");
//     scanf("%d",&limit);
//     for (int i = 1; i < limit; i++)
//     {
//         if(i%2!=0){
//             temp = temp + i;
//         }
//     }
    
//     printf("The sum is %d",temp);
    
//     return 0;
// }

// Question 3

int main(){

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}