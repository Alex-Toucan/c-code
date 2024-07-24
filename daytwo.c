#include <stdio.h>

int main()
{
	printf("Good morning!\n");
	
	int cheese;
	printf("How many cheese slices: ");
	scanf("%d", &cheese);
	printf("You have %d slices of cheese\n", cheese);
	
	char dog;
	printf("Enter a character: ");
	scanf("%c", &dog);
	printf("Dog is the %c character\n", dog);
	
	float price;
	printf("Enter a price: ");
	scanf("%f", &price);
	printf("The price is $%.2f\n", price);
	
	return 0;
}
