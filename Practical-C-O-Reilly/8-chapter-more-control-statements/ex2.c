#include <stdio.h>

#define SIZE 2


int main(void) {
    int resistors[SIZE] = {400, 200};

    float reciprocal_sum = 0.0f;

    for (int i = 0; i < SIZE; i++) {
        reciprocal_sum += 1.0f / resistors[i];
    }

    float total_resistance = 1.0f / reciprocal_sum;

    printf("Calculated resistance of %d resistors in parallel: %.2f Ω\n", SIZE, total_resistance);
    return 0;
}