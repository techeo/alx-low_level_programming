#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char random_lowercase_letter() {
    return 'a' + rand() % 26;
}

int main() {
    int i;
    char password[9];

    srand(time(NULL));

    for (i = 0; i < 8; i++) {
        password[i] = random_lowercase_letter();
    }
    password[8] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
