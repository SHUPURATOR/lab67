#include <stdio.h>
#include <locale.h>
int main() {
 
setlocale(LC_ALL, "RUS");
int n;

printf("Введите двухзначное число: ");
scanf("%d", &n);
if (n >= 100) 
 {
	printf("Ошибка: число %d не является двухзначным.\n", n);
    return 0;
}
int num = n % 10;

switch(num) {
        case 2:
        case 3:
        case 5:
        case 7:
            printf("Последняя цифра числа %d — %d — является простым числом.\n", n, num);
            break;
        default:
            printf("Последняя цифра числа %d — %d — НЕ является простым числом.\n", n, num);
}

return 0;
}