
/*#include <stdio.h>

void swap(int x, int y) {
	int temp = x;
	x = y;
	temp = y;
}

void pointer_swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sum_avg(double *a, double *b) {
	double sum = 0;
	double avg = 0;
	sum = *a + *b;
	avg = sum / 2;
	*a = sum;
	*b = avg;
	printf("(sum_avg 함수 내)두 수의 합 : %.2f\n두 수의 평균 : %.2f\n", sum, avg);
}

void printArr(int arr[]) {
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0 && i != 0)
			printf("%3d", arr[i]);
	}
}

int main() {
	int a = 1, b = 2;
	swap(a, b);
	printf("a: %d b: %d\n", a, b);
	int* ptr1 = &a;
	int* ptr2 = &b;
	pointer_swap(ptr1, ptr2);
	printf("ptr1 : %d ptr2 : %d\n", *ptr1, *ptr2);
	double x, y;
	printf("실수 두개 입력 : ");
	scanf_s("%lf %lf", &x, &y);
	double* p1 = &x;
	double* p2 = &y;
	sum_avg(p1, p2);
	printf("(main 함수 내)두 수의 합 : %.2f\n두 수의 평균 : %.2f\n", *p1, *p2);
	int arr[100];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		arr[i] = i + 1;
	printArr(arr);
}
=======
#include <stdio.h>

void swap(int x, int y) {
	int temp = x;
	x = y;
	temp = y;
}

void pointer_swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sum_avg(double *a, double *b) {
	double sum = 0;
	double avg = 0;
	sum = *a + *b;
	avg = sum / 2;
	*a = sum;
	*b = avg;
	printf("(sum_avg 함수 내)두 수의 합 : %.2f\n두 수의 평균 : %.2f\n", sum, avg);
}

void printArr(int arr[]) {
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0 && i != 0)
			printf("%3d", arr[i]);
	}
}

int main() {
	int a = 1, b = 2;
	swap(a, b);
	printf("a: %d b: %d\n", a, b);
	int* ptr1 = &a;
	int* ptr2 = &b;
	pointer_swap(ptr1, ptr2);
	printf("ptr1 : %d ptr2 : %d\n", *ptr1, *ptr2);
	double x, y;
	printf("실수 두개 입력 : ");
	scanf_s("%lf %lf", &x, &y);
	double* p1 = &x;
	double* p2 = &y;
	sum_avg(p1, p2);
	printf("(main 함수 내)두 수의 합 : %.2f\n두 수의 평균 : %.2f\n", *p1, *p2);
	int arr[100];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		arr[i] = i + 1;
	printArr(arr);
}*/
