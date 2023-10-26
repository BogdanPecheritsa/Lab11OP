#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((unsigned int)time(NULL));

    int n;
    double a, b;

    printf("Введіть кількість елементів масиву (n): ");
    scanf_s("%d", &n);
    printf("Введіть a (нижня межа інтервалу): ");
    scanf_s("%lf", &a);
    printf("Введіть b (верхня межа інтервалу): ");
    scanf_s("%lf", &b);

    if (a >= b) {
        printf("Помилка: a має бути менше за b.\n");
        return 1;
    }

    double* array = (double*)malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        array[i] = a + ((double)rand() / RAND_MAX) * (b - a);
    }

    printf("Кількість елементів масиву: %d\n", n);
    printf("Інтервал [a, b]: [%.2lf, %.2lf]\n", a, b);

    printf("Масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");

    double product = 1.0;
    for (int i = 0; i < n; i += 2) {
        product *= array[i];
    }
    printf("Добуток елементів з парними номерами: %.2lf\n", product);

    int first_zero_index = -1;
    int last_zero_index = -1;
    double sum_between_zeros = 0.0;

    for (int i = 0; i < n; i++) {
        if (array[i] == 0.0) {
            if (first_zero_index == -1) {
                first_zero_index = i;
            }
            else {
                last_zero_index = i;
            }
        }

        if (first_zero_index != -1 && last_zero_index != -1) {
            break;
        }
    }

    if (first_zero_index != -1 && last_zero_index != -1) {
        for (int i = first_zero_index + 1; i < last_zero_index; i++) {
            sum_between_zeros += array[i];
        }
    }

    printf("Сума елементів масиву, розташованих між першим і останнім нульовими елементами: %.2lf\n", sum_between_zeros);

    free(array);

    return 0;
}