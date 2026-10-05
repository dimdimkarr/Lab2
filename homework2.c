#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "UTF_8");

    double x;
    double walk_speed = 4.0;

    printf("Пробежанное расстояние x (км): ");
    scanf("%lf", &x);

    double run_speed = walk_speed * 3;
    double t = x / run_speed;

    printf("Время: %.2f ч\n", t);

    return 0;
}