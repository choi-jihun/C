/*#include <stdio.h>
double change_height(int cm)
{
	double m;
	m = cm / (double)100;
	return m;
}
void sum(double a, double b) {
	printf("두 실수의 합 : %.2f\n", a + b);
}
void avg(double a, double b) {
	printf("두 실수의 평균 : %.2f\n", (a + b) / 2);
}
void sum_avg(double a, double b, char op) {
	if (op == '+')
		printf("두 실수의 합 : %.2f\n", a + b);
	else if (op == '#')
		printf("두 실수의 평균 : %.2f\n", (a + b) / 2);
	else
		return;
}
void while_sum(int n) {
	int result = 0;
	while (result < 1000) {
		if (n % 5 != 0) {
			result += n;
			n++;
		}
		else
			n++;
	}
	printf("%d\n", result);
}
void repeat_sum(int n) {
	int result = 0;
	for (int i = 0; i <= n; i++) {
		result += i;
	}
	printf("%d\n", result);
}
int rec_sum(int n) {
	if (n != 0)
		return n + rec_sum(n - 1);
	else
		return n;
}
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
double po_sum_avg(double x, double y, char op) {
	double* p1 = &x, * p2 = &y;
	if (op == '+')
		return *p1 + *p2;
	else if (op == '#')
		return (*p1 + *p2) / 2;
}
int main() {
	while (1) {
		int menu;
		printf("문제 번호 입력(종료 0) : ");
		scanf_s(" %d", &menu, 100);
		if (menu == 1)
		{
			//1번
			int height;
			printf("키 입력(Cm) : ");
			scanf_s("%d", &height, 100);
			printf("키(M) : %.2f\n", change_height(height));
		}
		else if (menu == 2)
		{
			//2번
			double m, n;
			printf("두 실수 입력 : ");
			scanf_s("%lf %lf", &m, &n, 100);
			sum(m, n);
			avg(m, n);
		}
		else if (menu == 3) {
			//3번
			double x, y;
			char op;
			printf("연산자 입력(+ or #) : ");
			scanf_s(" %c", &op, 1);
			printf("두 실수 입력 : ");
			scanf_s("%lf %lf", &x, &y, 100);
			sum_avg(x, y, op);
		}
		else if (menu == 4) {
			//4번
			int s;
			printf("정수 입력 : ");
			scanf_s(" %d", &s);
			while_sum(s);
		}
		else if (menu == 5) {
			//5번
			int k;
			printf("정수 입력 : ");
			scanf_s(" %d", &k);
			repeat_sum(k);
			printf("%d\n", rec_sum(k));
		}
		else if (menu == 6) {
			//6번
			int a = 100;
			int* p = &a;
			*p = 200;
			printf("%d\n", a);
			printf("%d\n", (*p) + a);
			//a의 주소를 참조하고 있는 p의 값이 200이 되어 a의 값도 200으로 바뀌고 두 변수를 더한 값은 400이 출력
		}
		else if (menu == 7) {
			//7번
			int a = 100;
			int* p = &a;
			double* pd;
			//pd = p;
			//printf("%lf", *pd);
			//p는 인트형 변수이고 pd는 더블형 이므로 오류가 발생
		}
		else if (menu == 8) {
			//8번
			int x = 5;
			int y = 6;
			swap(x, y);
			printf("%d %d\n", x, y);
			int xx = 5;
			int yy = 6;
			pointer_swap(&xx, &yy);
			printf("%d %d\n", xx, yy);
		}
		else if (menu == 9) {
			//9번
			double x, y;
			char op;
			printf("실수 두개 입력 : ");
			scanf_s(" %lf %lf", &x, &y, 100);
			printf("연산자 입력 : ");
			scanf_s(" %c", &op, 1);
			printf("%.2f\n", po_sum_avg(x, y, op));
		}
		else if (menu == 0)
		{
			printf("종료합니다\n");
			break;
		}
		else
			printf("다시입력하세요!\n");

	}

}*/