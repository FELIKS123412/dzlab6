#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float x, y;
	printf("Введите значение x:");
	scanf("%f", &x);
	printf("Введите значение y:");
	scanf("%f", &y);
	if (pow(x, 2) + pow(y, 2) <= 4 && y >= x && x >= 0)
	{
		printf("Точка %f, %f принадлежит области.", x, y);
	}
	else
	{
		printf("Точка %f, %f не принадлежит области.", x, y);
	}



}