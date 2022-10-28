#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct {
	char word[20];
	char meaning[100];
}OneWord;

typedef struct {
	OneWord dictionary[100];
	int cnt;
}dict;

dict find_word(dict dic, char* find) {
	bool flag = false;
	for (int i = 0; i < dic.cnt; i++) {
		if (strcmp(dic.dictionary[i].word, find) == 0) {
			printf("�ܾ� : %s\n�� : %s\n", dic.dictionary[i].word, dic.dictionary[i].meaning);
			flag = true;
			break;
		}
	}
	if (flag == false) {
		printf("�ܾ ã�� ���߽��ϴ�.\n");
		char mean[100];
		printf("�ܾ��� �� �Է� : ");
		scanf("%s", mean);
		strcpy(dic.dictionary[dic.cnt].word, find);
		strcpy(dic.dictionary[dic.cnt].meaning, mean);
		dic.cnt++;
	}
	return dic;
}

int main() {
	int menu;
	dict dic;
	dic.cnt = 0;
	while (1) {
		printf("���� : 0 �ܾ� �˻� : 1\n");
		printf("�޴� �Է� : ");
		scanf("%d", &menu);
		char find[20];
		if (menu == 1) {
			printf("�ܾ��Է� : ");
			scanf("%s", find);
			dic = find_word(dic, find);
		}
		else if (menu == 0) {
			printf("�����մϴ�.\n");
			break;
		}
		else
			printf("�ٽ� �Է��ϼ���.\n");
	}
}