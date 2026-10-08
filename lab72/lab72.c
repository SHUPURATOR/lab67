#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()

{
	setlocale(LC_ALL, "RUS");
	

	printf("Введите символы 'число' действие 'число': ");
	float x, y;
	char c;
	scanf(" %f %c %f", &x, &c, &y);//считывание с консоли

	switch (c)

	{

	case '-':

		printf("=%f\n", x-y);
		break;

	case '+':

		printf("=$f\n", x+y);
		break;

	case '*':

		printf("=%f\n", x*y);
		break;

	case '/':

		printf("=%f\n",x/y);
		break;

	case 'e':

		printf("=%f\n", pow(x,y));
	
	default:

		printf("Неизвестный символ\n");

	}

	return 0;

}