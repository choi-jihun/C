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
		printf("�޴� �Է� : ");
		scanf("%d", &menu);
		if (menu == 1) {
			cal = sum;
			int x, y;
			printf("���� �Է� : ");
			scanf("%d %d", &x, &y);
			printf("a+b : %d\n", cal(x, y));
		}
		else if (menu == 2) {
			cal = sub;
			int x, y;
			printf("���� �Է� : ");
			scanf("%d %d", &x, &y);
			printf("a - b : %d\n", cal(x, y));
		}
		else if (menu == 3) {
			cal = mul;
			int x, y;
			printf("���� �Է� : ");
			scanf("%d %d", &x, &y);
			printf("a * b : %d\n", cal(x, y));
		}
		else if (menu == 4) {
			cal = max;
			int x, y;
			printf("���� �Է� : ");
			scanf("%d %d", &x, &y);
			printf("ū �� : %d\n", cal(x, y));
		}
		else if (menu == 5) {
			cal = min;
			int x, y;
			printf("���� �Է� : ");
			scanf("%d %d", &x, &y);
			printf("���� �� : %d\n", cal(x, y));
		}
		else if (menu == 0) {
			printf("�����մϴ�.\n");
			break;
		}
		else
			printf("�ٽ��Է��ϼ���,\n");
	}
	
}