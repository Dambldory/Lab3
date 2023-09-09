#include <stdio.h>
#include <locale.h>
#define d 2.54
void main()
{
	setlocale(LC_CTYPE, "RUS");
	/*int num, num1;
	puts("Введите число");
	scanf("%d", &num);
	printf("Введено число %d \n", num);
	puts("Введите  второе число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);
	printf("Сумма этих чисел: %d \nРазность этих чисел: %d\nПроизведение чисел: %d\n", num1 + num, num1 - num, num1 * num);
	printf("Частное чисел: %.3f\nОстаток деления: %d\n", (float)num1 / num,num1%num);
	*/
	/*int dym;
	float result;
	puts("Введите значение:\n");
	scanf("%d", &dym);
	result = d * dym;
	printf("%d дюймов - это %.1f сантиметров", dym, result);
	*/
	int a, b;
	puts("Введите число");
	scanf("%d\n %d", &a, &b);
	//printf("%d, %d", a, b);
	printf(" __________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf(" __________________\n");
	printf("|% d * %d | % d + % d | % d - % d | \n", a, b, a, b, a, b);
	printf(" __________________\n");

}
