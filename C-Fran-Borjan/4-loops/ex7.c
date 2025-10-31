#include "../../use.h"

int main() {
    char line[100];
    int referees = 0;
    int level = 0;
    double total = 0.0;

    // Ask for number of referees (minimum 3)
    do {
        printf("How many refs? (min 3): ");
        if (!fgets(line, sizeof(line), stdin))
            return 1;
    } while (sscanf(line, "%d", &referees) != 1 || referees < 3);

    int points[referees];

    // Ask for difficulty level
    printf("Difficulty level of jump: ");
      
    // Get referee scores
    for (int i = 0; i < referees; i++) {
        printf("Referee [%d] score: ", i + 1);
        while (!fgets(line, sizeof(line), stdin) || sscanf(line, "%d", &points[i]) != 1) {
            printf("Invalid input, try again: ");
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Find min and max
    int min = points[0];
    int max = points[0];
    for (int i = 1; i < referees; i++) {
        if (points[i] < min) min = points[i];
        if (points[i] > max) max = points[i];
    }

    // Calculate total excluding min and max
    for (int i = 0; i < referees; i++) {
        total += points[i];
    }
    total = total - min - max;

    double avg = total / (referees - 2);
    double final_score = avg * 3 * level;

    printf("\nLowest score: %d\n", min);
    printf("Highest score: %d\n", max);
    printf("Final score: %.2f\n", final_score);

    return 0;
}