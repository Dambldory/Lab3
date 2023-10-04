#include <stdio.h>
#include <locale.h>
#define d 2.54
#define d1 2.7076
#define g 6.67e-11
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
	int dym;
	float result, result1;
	puts("Введите значение:\n");
	scanf("%d", &dym);
	result = d * dym;
	result1 = d1 * dym;
	printf("%d дюймов - это %.1f сантиметров\n", dym, result);
	printf("%d старолитовских дюймов - это %.1f сантиметров", dym, result1);
	
	/*int a, b;
	puts("Введите число");
	scanf("%d\n %d", &a, &b);
	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("|%2d*%-2d|%2d+%-2d|%2d-%-2d|\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("|%3d  |%3d  |%3d  |\n", a * b, a + b, a - b);
	printf("-------------------\n");*/
	/*int a, b, c;
	puts("Введите массу первого тела (в кг):");
	scanf("%d", &a);
	puts(" \nВведите массу второго тела (в кг):");
	scanf("%d", &b);
	puts("\nВведите расстояние между ними (в метрах):");
	scanf("%d", &c);
	puts("\nСила притяжения между телами равна:");
	printf("%e Ньютонов",g * ((a * b) / (c * c)));*/

}