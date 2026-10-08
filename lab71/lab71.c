#include <stdio.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "RUS");
	char c;

	printf("Введите символы 'число' или 'буква': ");

	scanf("%c", &c);//считывание с консоли

	switch (c)

	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':


		printf("Введено 'число'.\n");

		break;

	default:

		printf("Введено 'буква'.\n");

	}

	return 0;

}