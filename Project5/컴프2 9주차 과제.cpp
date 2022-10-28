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
			printf("단어 : %s\n뜻 : %s\n", dic.dictionary[i].word, dic.dictionary[i].meaning);
			flag = true;
			break;
		}
	}
	if (flag == false) {
		printf("단어를 찾지 못했습니다.\n");
		char mean[100];
		printf("단어의 뜻 입력 : ");
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
		printf("종료 : 0 단어 검색 : 1\n");
		printf("메뉴 입력 : ");
		scanf("%d", &menu);
		char find[20];
		if (menu == 1) {
			printf("단어입력 : ");
			scanf("%s", find);
			dic = find_word(dic, find);
		}
		else if (menu == 0) {
			printf("종료합니다.\n");
			break;
		}
		else
			printf("다시 입력하세요.\n");
	}
}