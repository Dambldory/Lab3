#include <stdio.h>
#include <locale.h>
#define d 2.54
#define d1 2.7076
#define g 6.67e-11
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
	int dym;
	float result, result1;
	puts("������� ��������:\n");
	scanf("%d", &dym);
	result = d * dym;
	result1 = d1 * dym;
	printf("%d ������ - ��� %.1f �����������\n", dym, result);
	printf("%d �������������� ������ - ��� %.1f �����������", dym, result1);
	
	/*int a, b;
	puts("������� �����");
	scanf("%d\n %d", &a, &b);
	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("|%2d*%-2d|%2d+%-2d|%2d-%-2d|\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("|%3d  |%3d  |%3d  |\n", a * b, a + b, a - b);
	printf("-------------------\n");*/
	/*int a, b, c;
	puts("������� ����� ������� ���� (� ��):");
	scanf("%d", &a);
	puts(" \n������� ����� ������� ���� (� ��):");
	scanf("%d", &b);
	puts("\n������� ���������� ����� ���� (� ������):");
	scanf("%d", &c);
	puts("\n���� ���������� ����� ������ �����:");
	printf("%e ��������",g * ((a * b) / (c * c)));*/

}