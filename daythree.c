#include <stdio.h>

int main()
{
	printf("Let's do math!\n");
	
	int num1, num2, ans;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	printf("Enter a number: ");
	scanf("%d", &num2);
	
	ans = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, ans);
	
	ans = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, ans);
	
	ans = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, ans);
	
	ans = num1 / num2;
	printf("%d / %d = %d\n", num1, num2, ans);
	
	ans = num1 % num2;90 / 9 = 10
	printf("%d mod %d = %d\n", num1, num2, ans);
	
	return 0;
}
