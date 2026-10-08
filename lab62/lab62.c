#include <stdio.h>
#include <math.h>
#include <locale.h>

double calc(double x) {
    return (x <= -3) ? 9.0 : (1.0 / (x * x + 1.0));
}

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Результат F(x) = %.4f\n", calc(x));
    return 0;

}