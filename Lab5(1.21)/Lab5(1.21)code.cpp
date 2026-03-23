#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    const int n = 10;
    int a[n];
    int x, b;
    int count = 0;
	int corect_input = 1;
    while (corect_input == 1) {
        printf("Ведiть x та y, x<y\n");
        scanf_s("%d %d", &x, &b);
        if (x >= b) {
            printf("Помилка. x має бути менше за y\n");
            
        }
        else if (b >= x) {
            for (int i = 0; i < n; i++) {
                printf("a[%d]=", i);
                scanf_s("%d", &a[i]);

                if (a[i] >= x && a[i] <= b) {
                    count++;
                }
            }
            printf("Кiлькiсть елементiв масиву що знаходяться у межах [%d, %d]: %d\n", x, b, count);
        }
       
		printf("Бажаєте повторити? (1 - так, 0 - нi)");
		scanf_s("%d", &corect_input);
    }

}
