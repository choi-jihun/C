#include <stdio.h>
#include <stdlib.h>  // rand()�Լ��� �����ϴ� ���̺귯��
#include <time.h>   // time()�Լ��� �����ϴ� ���̺귯��
#include <string.h>


int main(void) {

	srand(time(NULL)); // �Ź� �ٸ� ������ �߻��ϵ��� �ϱ� ���ؼ� ���
	char ch[10];

	int random = 0;
	int win = 0, draw = 0, lose = 0;

	while (lose == 0) {
		random = rand() % 3 + 1; //������ 1 ������ 2 ���� 3
		printf("���� ���� �� �� �Է� : ");
		gets_s(ch, sizeof(ch));
		if (strcmp(ch, "����") == 0) {
			if (random == 1) {
				draw++;
				printf("����� %s����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n", ch);
			}
			else if (random == 2) {
				win++;
				printf("����� %s����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n", ch);
			}

			else {
				lose++;
				printf("����� %s����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�.\n", ch);
				break;
			}
		}
		else if (strcmp(ch, "����") == 0) {
			if (random == 1) {
				printf("����� %s����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�.\n", ch);
				lose++;
				break;
			}
			else if (random == 2) {
				draw++;
				printf("����� %s����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n", ch);
			}
			else {
				printf("����� %s����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n", ch);
				win++;
			}

		}
		else if (strcmp(ch, "��") == 0) {
			if (random == 1) {
				printf("����� %s����, ��ǻ�ʹ� �� ����, �̰���ϴ�.\n", ch);
				win++;
			}

			else if (random == 2) {
				printf("����� %s����, ��ǻ�ʹ� �� ����, ����� �����ϴ�.\n", ch);
				lose++;
				break;
			}
			else {
				printf("����� %s����, ��ǻ�ʹ� �� ����, �����ϴ�.\n", ch);
				draw++;
			}

		}
		else
			printf("�ٽ��Է��ϼ���,\n");
	}
	printf("������ ��� : %d��, %d��\n", win, draw);
}