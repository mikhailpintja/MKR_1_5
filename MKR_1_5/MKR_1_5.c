// MKR1_5.c: ��������� ������ ������ ���������� �� ���� �����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

double k2, s; //k2- ������� ������, s - ����� ����������, �� �������������
int main(void)
{
	double k1, g; //k1 - ������� ������, g - ������� �i��������//
	setlocale(LC_CTYPE, "ukr");
	do
	{
		printf("\n ����i�� ������� ������ �1= \t"); scanf("%lf", &k1);
		printf(" ����i�� ������� �i�������� G= \t"); scanf("%lf", &g);
		if (g <= 0 || k1 <= 0 || g <= k1) printf("\n ������� �������� ����� \n �� ����� ����� �1= %.3lf �� G= %.3lf, ��i �� � ��������� ����i� ���������� \n", k1, g);
	} while (g <= 0 || k1 <= 0 || g <= k1);
	k2 = sqrt(pow(g, 2) - pow(k1, 2));
	s = k1 * k2 / 2;
	printf("\n ��� ������i �i�������� \t G= %.3lf \n i ������i ������ \t \t �1= %0.3lf \n i���� ����� ������ ������� \t �2= %0.3lf \n ����� ���������� ����������� \t S=%0.3lf", g, k1, k2, s);
	int getch(); getch();
	return 0;
}
