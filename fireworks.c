#include <stdio.h>

int main()
{
	// variables to collect age
	int age;
	float fireworks;
	float total;
	
	// read in apples
	printf("How old are you:" );
	scanf("%d", &age);
	
	// do math
	if (age >= 18) {
		printf("How many fireworks do you want?: ");
		scanf("%d", &fireworks);
		
		total = fireworks * 3.00;
		
		printf("%d fireworks costs $%.2f. Pay up right now!\n", fireworks, total);
	}
	else {
		printf("You must be 18 years or older to buy fireworks. Goodbye!\n");
	}
	
	// print results
	
	return 0;
}
