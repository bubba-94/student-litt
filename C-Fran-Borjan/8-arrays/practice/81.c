#include <stdio.h>

#define SIZE1 10
#define SIZE2 4

double arr[SIZE2] = {0.0,0.0,0.0,0.0};
int arr2[] = {5,10,20,50,100,200};

int main (){
    
    printf("Double: ");
    for (int i = 0; i < SIZE2; i++){
        printf("%.2f ", arr[i]);
    }

    printf("\nInt: ");
    for(int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}