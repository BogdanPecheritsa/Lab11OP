#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, a, b;
    printf("������ ������� �������� ������ n: ");
    scanf_s("%d", &n);
    printf("������ �������� [a, b]: ");
    scanf_s("%d%d", &a, &b);

    srand((unsigned int)time(0));
    int* arr = (int*)malloc(n * sizeof(int));
    printf("�������� ������: ");
    for (int i = 0; i < n; i++) {
        arr[i] = a + rand() % (b - a + 1);
        printf("%d ", arr[i]);
    }
    printf("\n");

    int product = 1;
    for (int i = 0; i < n; i += 2) {
        product *= arr[i];
    }
    printf("������� �������� ������ � ������� ��������: %d\n", product);

    int first_zero_index = -1;
    int last_zero_index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (first_zero_index == -1) {
                first_zero_index = i;
            }
            last_zero_index = i;
        }
    }

    if (first_zero_index != -1 && last_zero_index != -1 && first_zero_index != last_zero_index) {
        int sum = 0;
        for (int i = first_zero_index + 1; i < last_zero_index; i++) {
            sum += arr[i];
        }
        printf("���� �������� ������, ������������ �� ������ � ������� ��������� ����������: %d\n", sum);
    }
    else {
        printf("� ����� ���� ���� �������� �������� ��� ���� ����������� �����.\n");
    }

    free(arr);
    return 0;
}