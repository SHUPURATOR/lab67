#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    
    int num;

    printf("Введите год: ");
    scanf("%d", &num);
    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
    {
        printf("год %d високосный\n", num);
    }
    else
    {
        printf("год %d не високосный\n", num);
    }
    return 0;
}