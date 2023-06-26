#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, sum;
    char password[84];
    char expected_password[] = "Tada! Congrats";

    srand(time(0));

    sum = 0;

    for (i = 0; i < 10; i++)
    {
        password[i] = rand() % 94 + 33;
        sum += password[i];
    }

    password[i] = '\0';

    sum = 2772 - sum;

    password[i - 1] = sum;

    printf("%s\n", password);

    if (strcmp(password, expected_password) == 0)
        printf("Correct password: %s\n", expected_password);
    else
        printf("Wrong password\n");

    return 0;
}
