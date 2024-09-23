#include <stdio.h>
#include <stdlib.h>

#define WINNING_NUMBERS_SIZE 5
#define BONUS_NUMBER 9

int main(int argc, char *argv[]) {
    if (argc != 7) {
        printf("Usage: ./gm n1 n2 n3 n4 n5 bonus\n");
        return 1;
    }

    int winning_numbers[WINNING_NUMBERS_SIZE] = {9, 8, 10, 24, 75}; // Define winning numbers
    int numbers[WINNING_NUMBERS_SIZE];
    int bonus;

    // Parse the input numbers
    for (int i = 1; i <= WINNING_NUMBERS_SIZE; i++) {
        numbers[i - 1] = atoi(argv[i]);
        if (i < WINNING_NUMBERS_SIZE && (numbers[i - 1] < 1 || numbers[i - 1] > 75)) {
            printf("Numbers must be between 1 and 75\n");
            return 1;
        } else if (i == WINNING_NUMBERS_SIZE) {
            bonus = atoi(argv[i]);
            if (bonus < 1 || bonus > 15) {
                printf("Bonus number must be between 1 and 15\n");
                return 1;
            }
        }
    }

    // Check for a winning match
    int match = 1; // Assume a win initially
    for (int i = 0; i < WINNING_NUMBERS_SIZE; i++) {
        if (numbers[i] != winning_numbers[i]) {
            match = 0; // Found a number that doesn't match
            break;
        }
    }

    if (match && bonus == BONUS_NUMBER) {
        printf("Congratulations! You have won the Jackpot!\n");
    } else {
        printf("Sorry, you did not win. Better luck next time!\n");
    }

    return 0;
}

