#include "../../use.h"

int main (){
    char *env = getenv("NAME");

    printf("Running on: %s\n", env);
    return 0;
}