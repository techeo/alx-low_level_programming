#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char random_lowercase_letter() {
    return 'a' + rand() % 26;
}

int main() {
    int i;
    char password[16];

    srand(time(NULL));

    strcpy(password, "Tada! Congrats");

    for (i = 0; i < 8; i++) {
        password[i] = random_lowercase_letter();
    }

    printf("%s\n", password);

    return 0;
}
