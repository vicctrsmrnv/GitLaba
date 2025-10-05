#include "stdio.h"
#include "locale.h"
int main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
	printf("¬ведите два числа: ");
	scanf_s("%d %d", &a, &b);
	return 0;
}