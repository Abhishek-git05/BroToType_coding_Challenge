#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int arr1[] = {2, 4, 6, 8};
//     int arr2[] = {1, 3, 5, 7};

//     for (int i = 0; i < 4; i++)
//     {
//         int temp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = temp;
//     }
//     printf("%d", arr1[2]);

//     return 0;
// }

// question 2

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int count = 0;
//     for(int i = 0; i < 5; i++){
//         if(arr[i]%2!=0){
//             count = count + 1;
//         }
//     }
//     printf("no.of even numbers in this array : %d",count);
//     return 0;
// }

// Question 3

int main()
{
    int count = 5;
    int temp;
    int arr[] = {6, 7, 5, 3, 5};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (size_t i = 0; i < 5; i++)
    {
    printf("%d", arr[i]);
        /* code */
    }
    
}