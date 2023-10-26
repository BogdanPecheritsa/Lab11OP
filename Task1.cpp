#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    int choice;
    while (1) {
        printf("Виберіть генератор (1-10) або 0 для виходу: ");
        scanf_s("%d", &choice);

        if (choice == 0) {
            break;
        }

        int random_number;

        switch (choice) {
        case 1:
            random_number = -1 - rand() % 4;
            break;
        case 2:
            random_number = 100 + rand() % 200;
            break;
        case 3:
            random_number = -2 * (rand() % 18 + 1);
            break;
        case 4:
            random_number = -128 + rand() % 256;
            break;
        case 5:
            random_number = 2 * (rand() % 10) - 7 + 1;
            break;
        case 6:
            random_number = -8 + rand() % 57;
            break;
        case 7:
            random_number = -100 + rand() % 201;
            break;
        case 8:
            random_number = 23 + rand() % 49;
            break;
        case 9:
            random_number = rand() % 2;
            break;
        case 10:
            random_number = (int)sqrt(17) + rand() % (int)(sqrt(82) - sqrt(17));
            break;
        default:
            printf("Неправильний вибір. Спробуйте ще раз.\n");
            continue;
        }

        printf("Ваше випадкове число: %d\n", random_number);
    }

    return 0;
}