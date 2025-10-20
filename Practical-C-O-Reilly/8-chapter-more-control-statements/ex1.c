#include <stdio.h>

/*
    Printf a checker board (8-by-8 grid). Each square should be 5-by-3 characters wide
    +----+
    |    |
    |    |
    |    |
    +----+
*/

// Decide width and length for grid. Right now 15 by 15.
const int COL = 15;
const int ROW = 15;

char x[] = "+-----";
char y[] = "|     ";
 
int main(){
    

    for (int r = 0; r < ROW; r++){

        // Print each row
        for (int c = 0; c < COL; c++){
            printf("%s", x);
        }

        // Add + for each row
        printf("+\n");

        // 
        for (int h = 0; h < 3; h++){
            for (int c = 0; c < COL; c++){
                printf("%s", y);

                // Print last closing bracket | for each row
                if (c == COL - 1){
                    printf("|");
                }
            }
            printf("\n");
        }

    }

    // Print last border
    for (int c = 0; c < COL; c++){
        printf("%s", x);
    }
    
    // Add +
    printf("+\n");

    return 0;
}
