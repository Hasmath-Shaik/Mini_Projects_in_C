#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Welcome to the Quiz Game!\n");

    printf("\nQuestion 1: What is the capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Hyderabad  4. Chennai\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQuestion 2: Which planet is known as the Red Planet?\n");
    printf("1. Earth  2. Mars  3. Venus  4. Jupiter\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("\nQuestion 3: Who invented C Language?\n");
    printf("1. Dennis Ritchie  2. James Gosling  3. Bjarne Stroustrup  4. Ken Thompson\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("\nYour final score: %d/3\n", score);

    return 0;
}
