#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main() {
    setlocale(LC_ALL, "Ukrainian");
	const int Count = 5;
	int a[Count];
	int min = 9999 ;
	int minIndex;
	int firstPos;
	int lastPos;
	int sum = 0;
	int Low = -100;
	int High = 100;
	srand(time(0));
	/*
	for(int i = 0; i < Count; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
		if (abs(a[i]) < min) {
			min = abs(a[i]);
			minIndex = i;
		}
	}
	*/
	for (int i = 0; i < Count; i++) {
		a[i] = Low + rand() % (High - Low + 1);
		printf("a[%d] = %d\n", i, a[i]);
		if (abs(a[i]) < min) {
			min = abs(a[i]);
			minIndex = i;
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
	printf("Сума між першим і останнім додатнім елементом = %d\n", sum);
	printf("Мінімальне за модулем = %d за Індексом %d", min, minIndex);

}