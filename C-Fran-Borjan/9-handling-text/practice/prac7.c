#include <stdio.h>
#include <string.h>

int main(){

    char birth1[] = "940601";
    char birth2[] = "940602";

    int flag = strcmp(birth1, birth2);

    printf("Is %s before %s : %d\n", birth1, birth2, flag);


    return 0;
}