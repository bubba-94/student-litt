#include <stdio.h>

int begins(const char*, const char*);

int main(){

    const char value1[] = "value";
    const char value2[] = "val";

    int compare = begins(value1, value2);

    if (compare == 0){
        printf("%s is the start of %s\n", value2, value1);
    }
    else printf("%s is NOT the start of %s\n", value2, value1);

    return 0;
}

int begins(const char *string1, const char* string2){
    for (int i = 0; string2[i] != '\0'; i++){
        // Restart to check next value
        if (string1[i] !=  string2[i]){

            // If not true return -1 (false)
            return -1;
        }
    }
    // If successful return 0 (true)
    return 0;
}