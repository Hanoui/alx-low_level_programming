#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, rand_num;
	char password[84];

	sum = 0;
	srand(time(0));

	for (i = 0; i < 83; i++)
	{
		rand_num = rand() % 62;
		if (rand_num < 10)
			password[i] = '0' + rand_num;
		else if (rand_num < 36)
			password[i] = 'A' + (rand_num - 10);
		else
			password[i] = 'a' + (rand_num - 36);

		sum += password[i];
	}

	password[i] = 2772 - sum;

	printf("%s", password);

	return (0);
}
