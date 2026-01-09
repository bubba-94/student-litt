#include <stdio.h>

// Compile program and then run file with one parameter <filename.txt>

#define BUFFER 100
int main (int argc, char* argv[]){

    char buffer[BUFFER];

    FILE* persons_out = fopen(argv[1], "a");

    if (persons_out == NULL){
        printf("Could not open %s\n", argv[1]);
    }

    printf("Enter a name: ");
        // Read from keyboard
    if(fgets(buffer, sizeof(buffer), stdin) != NULL){
        printf("Name printed: %s\n", buffer);
    }
        
    // Write to persons_out
    fputs(buffer, persons_out);

    return 0;
}
