#include <stdio.h>
#include <locale.h>
#define d 2.54
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
	float result;
	puts("������� ��������:\n");
	scanf("%d", &dym);
	result = d * dym;
	printf("%d ������ - ��� %.1f �����������", dym, result);
	*/
	int a, b;
	puts("������� �����");
	scanf("%d\n %d", &a, &b);
	//printf("%d, %d", a, b);
	printf(" __________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf(" __________________\n");
	printf("|% d * %d | % d + % d | % d - % d | \n", a, b, a, b, a, b);
	printf(" __________________\n");

}
