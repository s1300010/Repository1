#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int die1, die2, total;
    char name[40];


    srand(time(NULL));

    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    total = die1 + die2;

    printf("Rolling dice...\n");
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);


    if (total > 7) {
            printf("%s won!\n", name);
        } else {
            printf("%s lost.\n", name);
        }

    return 0;
}
