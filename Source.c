#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define d 2.54
#define d1 2.7076
#define g 0.0000000000667
double dz(float x, float y, float z)
{
	double result;
	result = g * x * y / (z * z);
	return result;
}
void main()
{
	setlocale(LC_CTYPE, "RUS");
	/*int num, num1;
	puts("������� �����");
	scanf("%d", &num);
	printf("������� ����� %d \n", num);
	puts("�������  ������ �����");
	scanf("%d", &num1);
	printf("������� ����� %d\n", num1);
	printf("����� ���� �����: %d \n�������� ���� �����: %d\n������������ �����: %d\n", num1 + num, num1 - num, num1 * num);
	printf("������� �����: %.3f\n������� �������: %d\n", (float)num1 / num,num1%num);
	*/
	/*int dym;
	float result, result1;
	puts("������� ��������:\n");
	scanf("%d", &dym);
	result = d * dym;
	result1 = d1 * dym;
	printf("%d ������ - ��� %.1f �����������\n", dym, result);
	printf("%d �������������� ������ - ��� %.1f �����������", dym, result1);*/

	/*int a, b;
	puts("������� �����");
	scanf("%d\n %d", &a, &b);
	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("|%2f*%-2f|%2f+%-2f|%2f-%-2f|\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("|%3f  |%3f  |%3f  |\n", a * b, a + b, a - b);
	printf("-------------------\n");
	system("pause");*/
	float a, b, c;
	double f;
	puts("������� ����� ������� ���� (� ��):");
	scanf("%d", &a);
	puts(" \n������� ����� ������� ���� (� ��):");
	scanf("%d", &b);
	puts("\n������� ���������� ����� ���� (� ������):");
	scanf("%d", &c);
	f=dz(a,b,c);
	printf("\n���� ���������� ����� ������ �����: %e\n", dz(a,b,c));
	system("pause");
}