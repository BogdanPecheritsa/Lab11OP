#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int D[15];
    srand((unsigned int)time(0));
    printf("Елементи масиву D: ");
    for (int i = 0; i < 15; i++) {
        D[i] = rand() % 100;
        printf("%d ", D[i]);
    }
    printf("\n");

    int max_value = D[0];
    for (int i = 1; i < 15; i++) {
        if (D[i] > max_value) {
            max_value = D[i];
        }
    }
    printf("Максимальне значення: %d\n", max_value);

    int second_max_value = -1;
    for (int i = 0; i < 15; i++) {
        if (D[i] != max_value && D[i] > second_max_value) {
            second_max_value = D[i];
        }
    }

    if (second_max_value != -1) {
        printf("Найбільше значення після відкидання максимального: %d\n", second_max_value);
    }
    else {
        printf("Всі елементи масиву дорівнюють максимальному значенню.\n");
    }

    return 0;
}