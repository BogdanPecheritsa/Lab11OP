#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    int m, n, k;
    int i;

    printf("������ ������� ����� ����� (m): ");
    scanf_s("%d", &m);
    printf("������ ������� ������ ����� (n): ");
    scanf_s("%d", &n);
    printf("������ ������� ����� � ����� (k): ");
    scanf_s("%d", &k);

    printf("ֳ� �����:\n");
    for (i = 1; i <= m; i++) {
        int random_integer = rand() % 301 - 200;
        printf("%d ", random_integer);
        if (i % k == 0) {
            printf("\n");
        }
    }

    printf("\nĳ��� ����� (� ������� �� ��������):\n");
    for (i = 1; i <= n; i++) {
        double random_double = ((double)(rand() % 10000) / 1000.0) * 10.0;
        printf("%.3lf ", random_double);
        if (i % k == 0) {
            printf("\n");
        }
    }

    return 0;
}