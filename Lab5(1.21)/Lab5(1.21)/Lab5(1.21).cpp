#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    const int n = 10;
    int a[n];
    int x, b;
    int count = 0;
    printf("Ведіть x та y, x<y\n");
    scanf_s("%d %d", &x, &b);
    if (x >= b) {
        printf("Помилка. x має бути менше за y");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf_s("%d", &a[i]);

        if (a[i] >= x && a[i] <= b) {
            count++;
        }
    }
    printf("Кількість елементів масиву що знаходяться у межах [%d, %d]: %d", x, b, count);
    return 0;
}