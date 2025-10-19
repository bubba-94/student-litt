#include <stdio.h>

/*
    Printf a checker board (8-by-8 grid). Each square should be 5-by-3 characters wide

*/

int main(){
    for (int i = 0; i < 2; i ++){
        for(int j = 0; j < 5; j++){
            printf("+-----\n");
            for (int k = 0; k < 3; k++){
                if (k != 0 || k != 3) printf("|\n");
            }
        }
        printf("+-----\n");
    }
    return 0;
}