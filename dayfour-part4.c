#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	// variables for our random number & guess
	int guess, num;
	
	// create a random number
	srand(time(0));
	num = rand() % 1000;
	// printf("%d\n", num);
	
	// allow the user to guess
	printf("Enter a guess: ");
	scanf("%d", &guess);
	
	while (guess != num)
	{
		if (guess < num)
			printf("Too low!\n");
		else if (guess > num)
			printf("Too high!\n");
		if (guess != num)
		{
			printf("Enter a guess: ");
			scanf("%d", &guess);
		}
	}
	
	printf("You win!\n");
	return 0;
}
