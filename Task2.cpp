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

    printf("¬вед≥ть к≥льк≥сть ц≥лих чисел (m): ");
    scanf_s("%d", &m);
    printf("¬вед≥ть к≥льк≥сть д≥йсних чисел (n): ");
    scanf_s("%d", &n);
    printf("¬вед≥ть к≥льк≥сть чисел у р€дку (k): ");
    scanf_s("%d", &k);

    printf("÷≥л≥ числа:\n");
    for (i = 1; i <= m; i++) {
        int random_integer = rand() % 301 - 200;
        printf("%d ", random_integer);
        if (i % k == 0) {
            printf("\n");
        }
    }

    printf("\nƒ≥йсн≥ числа (з точн≥стю до тис€чних):\n");
    for (i = 1; i <= n; i++) {
        double random_double = ((double)(rand() % 10000) / 1000.0) * 10.0;
        printf("%.3lf ", random_double);
        if (i % k == 0) {
            printf("\n");
        }
    }

    return 0;
}