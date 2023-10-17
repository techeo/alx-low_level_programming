#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random lowercase letter
char random_lowercase_letter() {
    return 'a' + rand() % 26;
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[9]; // Assume 8-character password with a null terminator

    for (int i = 0; i < 8; i++) {
        password[i] = random_lowercase_letter();
    }
    password[8] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
