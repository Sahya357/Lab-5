#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main() {
    setlocale(LC_ALL, "Ukrainian");
	const int Count = 5;
	int a[Count];
	
	int Low = -100;
	int High = 100;
	srand(time(0));
	int corect = 1;
	int choice;
	while (corect == 1) {
		int min = 9999;
		int minIndex;
		int firstPos;
		int lastPos;
		int sum = 0;
		printf("Введiть 1 для ручного заповнення масиву або 2 для автоматичного заповнення масиву: ");
		scanf_s("%d", &choice);
		if (choice == 1) {
			for (int i = 0; i < Count; i++) {
				printf("a[%d] = ", i);
				scanf_s("%d", &a[i]);
				if (abs(a[i]) < min) {
					min = abs(a[i]);
					minIndex = i;
				}
			}
		}
	
	else if (choice == 2) {
		for (int i = 0; i < Count; i++) {
			a[i] = Low + rand() % (High - Low + 1);
			printf("a[%d] = %d\n", i, a[i]);
			if (abs(a[i]) < min) {
				min = abs(a[i]);
				minIndex = i;
			}
		}
	}
		for (int i = 0; i < Count; i++) {
			if (a[i] > 0) {

				firstPos = i;
				break;
			}
		}
		for (int i = Count - 1; i >= 0; i--) {
			if (a[i] > 0) {
				lastPos = i;
				break;
			}
		}
		for (int i = firstPos + 1; i < lastPos; i++) {
			sum += a[i];
		}
		printf("Сума мiж першим i останнiм додатнiм елементом = %d\n", sum);
		printf("Мiнiмальне за модулем = %d за Iндексом %d", min, minIndex);

		printf("\nБажаєте повторити? Введiть 1 для повторення або 0 для виходу: ");
		scanf_s("%d", &corect);
	}
}
