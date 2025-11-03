#include <stdio.h>
#include <stdbool.h>


#define ROWS 4
#define COLS 4 

_Bool check_sym(int arr[][COLS], int size);
void read(int arr[][COLS], int size);

int main (){

    int field[ROWS][COLS];
    
    read(field, COLS);
    _Bool flag = check_sym(field, COLS);

    if (flag){
        printf("Symmetrical\n");
    }
    else printf("Not symmetrical\n");
    return 0;
}

_Bool check_sym(int arr[][COLS], int size)
{

    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            if (arr[i][j] != arr[j][i])
            {
                return 0;        
            }
        }
    }

    return 1;

}

void read(int arr[][COLS], int size){

    char buffer[256];

    for (int i = 0; i < size; i++){

        // Assign ints to arrays
        printf("Row: [%d] | Enter four ints: ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
        printf("\n");
    }
}