#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    setlocale(LC_ALL, "Ukrainian");
	const int Count = 5, Low = -100, High = 100;
	int a[Count];	
	srand(time(0));
	int min = 99999;
	int minIndex;
	int first = 0;
	int second = 0;
	int lastPos ;
	int firstPos ;
	int sum = 0;
	for (int i = 0; i < Count; i++) {
		a[i] = Low + rand() % (High - Low + 1);
		printf("%d ", a[i]);
		if (abs(a[i]) < min) {
			min = abs(a[i]);
			minIndex = i;
		}
	
	}
	for(int i = 0; i < Count; i++) {
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
	for(int i = firstPos ; i < lastPos; i++) {
		sum += a[i];
	}
	printf("Сума елементів між першим додатнім та останнім додатнім елементами: %d\n", sum);
	printf("Мінімальний елемент масиву: %d\n Індекс масиву %d", min, minIndex);
}