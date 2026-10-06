# Домашнее задание к работе 2

## Условие задачи

Мальчик может бегать в три раза быстрее, чем ходить. Скорость его ходьбы
равна 4 км/час. Он принял участие в марафонском забеге, но сошёл
с дистанции, пробежав только x км. Сколько времени он затратил
на преодоление этого расстояния?

## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало
2. Объявить константу:
   - `walk_speed = 4` (км/ч) — скорость ходьбы мальчика.
3. Задать исходные данные:
   - `x` — пробежанное расстояние (км).
4. Вычислить скорость бега:
   - `run_speed = walk_speed * 3`
5. Вычислить затраченное время:
   - `t = x / run_speed`
6. Вывести результат — время `t`.
7. Конец

### Блок-схема

https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&target=blank&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22LRJy4VA93tKmifcW2zKC%22%3E7Zpbk5MwFIB%2FTV%2Bc0QEClD72squOOuPMPqhPTixZiqaECem29dd7AqGQULvQgbXt%2BLDZ5OQkgXP5CKQjNF%2Fv3nKcrj6xkNCRY4W7EVqMHMceWx78k5J9IRlbViGIeBwqpUrwEP8mSliqbeKQZJqiYIyKONWFS5YkZCk0GeacbXW1R0b1VVMckYbgYYlpU%2FolDsWqkAbOuJK%2FI3G0Kle2%2FUnRs8alsrqTbIVDtq2J0N0IzTljoqitd3NCpfFKuxTj7v%2FSe7gwThLRZsDXBXI%2BfYhee3T5PUymW8%2BabF6jYhYSNqxQTatEmdiXRpHqD6qZsAT%2BzRgXKxaxBNOPjKUgt0H4kwixVz7FG8FAtBJrqno52yQhkVdnQeuRJUKp2mCbWSYwLwUBtEkS1lrLDX%2FKh8qJiut7wnSjru9gXQhLwtZE8D0ocEKxiJ%2F0G91WTrVd5SmsYiY6jFXTTTnH%2B5pCyuJEZLrVP0sZ6KgMQMHkjUqBfRkixjIZ2%2FAlUeO6TeUbU4HNIiIaU0GlZolKlEdIh2hpFxyUQnLKmNiuYkEeUryUPVvgg%2B5%2FSIiUvE8ySPBTjgQB4YLsaus1fbuq5WBgNV1bGqo0ZekDZchTnteM2NViThuLwc0J3TTHLJcJzn6ROaOMV2n3GFNqiDCNowSaS1iRgHwmzRcD0aaqYx2HoVz6RAL6R50BapOFLGfWCC4zGJd1KGd5eXeWw1DTYaa%2FfN1fZtz35i%2Bvjb%2FywIUqaGFKCWURx2uwWEp4DJchja73fa46uifFY7wjJfr6SxK%2Fe5I0aNOb1f1by5K8nDkqJ2TpglaeNBBhPl7LS01%2BZGk%2Bg0%2FljYXxE1QjWc0VrVqm2bXyMCvU7%2FN6kZNBXnpyHWee16d5OS8XANfU1%2BgpU23H16Om3BqVUTP2BoqaoMPeJX%2FEPp%2F3l7vHIbtYfJXTwBagaH2r9Sx2aoW8sVeNS94XOZ4Ol0O7865oYkz0wnuiSRt2PQP94ZA%2BPo304R6kdqu94pUwfYvpr%2B9ZSmAE0FWKLPeNdRTcdezeq12S0vvBK%2FY2R%2F5VycR2bzB3j8SLZ8SLY8RLMFi8OD3S3L74V9bzcV7g7NTNo0vmPnKNN6%2Fx2dzX34XRS78LozaA0wPmUh8DDdv1l9buDT0G%2BCYxngLag%2BEV%2FKGzXHZsW%2B0ig8T6thoNtq22vT5JjG6XxNcBWGQuci5g3ZcGbKuvAheDVCs4ba3%2B8nPcxi5XglRxQOku%2F3BxL9OmwmxPLEUGS5Fj7EEGY%2BmkT5b6%2F1n6b1nqo7NZirSJPHPXOzBL2x3r3ep37QaqJ6ed0d%2Fpj3NDqC4%2FbNujYHb087bojde2wWsjDb1gKF47Xc7Dn%2BP15R%2Bc3zqvg%2FN57ergN797Dc3rVq%2FN13jS3rBkf7nb6uz2mmA7rQF2oU73JH79vkD7zCn74cdbHXwFzeonTUU6VD8MQ3d%2FAA%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E

## 2. Реализация программы

```c
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    double x;
    double walk_speed = 4.0;

    printf("Пробежанное расстояние x (км): ");
    scanf("%lf", &x);

    double run_speed = walk_speed * 3;
    double t = x / run_speed;

    printf("Время: %.2f ч\n", t);

    return 0;
}
```

## 3. Результаты работы программы

```
Пробежанное расстояние x (км): 6
Время: 0.50 ч
```

## 4. Информация о разработчике

Жукова Дарья, бИД-261
