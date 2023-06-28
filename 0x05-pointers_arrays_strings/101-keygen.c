#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generate_password(char *password, int length)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < length; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[length] = '\0';
}

int main(void)
{
    char password[PASSWORD_LENGTH + 1];

    generate_password(password, PASSWORD_LENGTH);
    printf("Generated password: %s\n", password);

    return 0;
}

