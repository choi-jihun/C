#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return abs(a - b);
}

int mul(int a, int b) {
	return a * b;
}

int max(int a, int b) {
	return (a > b ? a : b);
}

int min(int a, int b) {
	return (a > b ? b : a);
}

int main() {
	while (1) {
		int(*cal)(int a, int b);
		int menu;
		printf("메뉴 입력 : ");
		scanf("%d", &menu);
		if (menu == 1) {
			cal = sum;
			int x, y;
			printf("숫자 입력 : ");
			scanf("%d %d", &x, &y);
			printf("a+b : %d\n", cal(x, y));
		}
		else if (menu == 2) {
			cal = sub;
			int x, y;
			printf("숫자 입력 : ");
			scanf("%d %d", &x, &y);
			printf("a - b : %d\n", cal(x, y));
		}
		else if (menu == 3) {
			cal = mul;
			int x, y;
			printf("숫자 입력 : ");
			scanf("%d %d", &x, &y);
			printf("a * b : %d\n", cal(x, y));
		}
		else if (menu == 4) {
			cal = max;
			int x, y;
			printf("숫자 입력 : ");
			scanf("%d %d", &x, &y);
			printf("큰 값 : %d\n", cal(x, y));
		}
		else if (menu == 5) {
			cal = min;
			int x, y;
			printf("숫자 입력 : ");
			scanf("%d %d", &x, &y);
			printf("작은 값 : %d\n", cal(x, y));
		}
		else if (menu == 0) {
			printf("종료합니다.\n");
			break;
		}
		else
			printf("다시입력하세요,\n");
	}
	
}