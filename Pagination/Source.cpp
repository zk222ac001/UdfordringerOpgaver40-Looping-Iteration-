#include <stdio.h>

int main(void)
{
	// initialize number
	int number1;
	int number2;

	// Take input two numbers from Users
	printf("Intast det f�rste tal (tal kan v�re et hvilket som helst tal s�som 4 :");
	scanf_s("%d", &number1);

	printf("Intast det anden tal (andet tal skal v�re st�rre end det f�rste):");
	scanf_s("%d", &number2);


	for (number1; number1 <= number2; number1++)
	{
		printf("%d ", number1);
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n");

	return 0;
}