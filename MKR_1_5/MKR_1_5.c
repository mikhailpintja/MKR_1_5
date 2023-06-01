// MKR1_5.c: Обрахунок розміру катета трикутника та його площі.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

double k2, s; //k2- довжина катета, s - площа трикутника, які обраховуються
int main(void)
{
	double k1, g; //k1 - довжина катету, g - довжина гiпотенузи//
	setlocale(LC_CTYPE, "ukr");
	do
	{
		printf("\n Введiть довжину катета К1= \t"); scanf("%lf", &k1);
		printf(" Введiть довжину гiпотенузи G= \t"); scanf("%lf", &g);
		if (g <= 0 || k1 <= 0 || g <= k1) printf("\n ПОМИЛКА ВВЕДЕННЯ ДАНИХ \n Ви ввели числа К1= %.3lf та G= %.3lf, якi не є довжинами сторiн трикутника \n", k1, g);
	} while (g <= 0 || k1 <= 0 || g <= k1);
	k2 = sqrt(pow(g, 2) - pow(k1, 2));
	s = k1 * k2 / 2;
	printf("\n При довжинi гiпотенузи \t G= %.3lf \n i довжинi катету \t \t К1= %0.3lf \n iнший катет матиме довжину \t К2= %0.3lf \n площа трикутника становитиме \t S=%0.3lf", g, k1, k2, s);
	int getch(); getch();
	return 0;
}
