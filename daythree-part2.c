#include <stdio.h>

int main()
{
	// variables to store apples and total
	int apples;
	float total;
	
	// read in apples
	printf("How many apples: ");
	scanf("%d", &apples);
	
	// do math
	if (apples > 10) {
		total = apples * 1.10;
	}
	else {
		total = apples * 1.25;
	}
	
	// print results
	printf("%d apples costs $%.2f\n", apples, total);
	
	return 0;
}
