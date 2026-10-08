#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    char num;


    printf("Введите число N (N < 1000): ");
    scanf("%d", &n);


    printf("Какую цифру вывести? (1 - первую, 2 - последнюю): ");
    scanf(" %c", &num);

    if (num == '2') {

        printf("Последняя цифра: %d\n", n % 10);

    }
    else if (num == '1')
    {


        int num2;

        if (n >= 100) {
            num2 = n / 100;
            printf("Первая цифра: %d\n", num2);
        }
        else if (n >= 10) {
            num2 = n / 10;
            printf("Первая цифра: %d\n", num2);
        }
        else {
            num2 = n;
            printf("Первая цифра: %d\n", num2);
        }
    }




    return 0;
}