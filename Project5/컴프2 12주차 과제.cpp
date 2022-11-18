#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct emergency_call {
	char name[20];
	char number[20];
	struct emergency_call* next;
}em;

void intsert_call(em** phead, em* p, em* newem) {
	if (*phead == NULL) {
		newem->next = NULL;
		*phead = newem;
	}
	else if (p == NULL) {
		newem->next = *phead;
		*phead = newem;
	}
	else {
		newem->next = p->next;
		p->next = newem;
	}
}

em* create_call(char* name) {
	em* temp;
	temp = (em*)malloc(sizeof(em));
	strcpy(temp->name, name);
	printf("전화번호 : ");
	scanf("%s", temp->number);
	return temp;
}

void display(em* head) {
	em* p = head;
	while (p != NULL) {
		printf("이름 : %s\n", p->name);
		printf("전화번호 : %s\n", p->number);
		p = p->next;
	}
}

int main() {
	emergency_call* phone = NULL;
	int count = 0;
	while (1) {
		printf("이름 입력(종료는 q) : ");
		char name[10];
		scanf("%s", name);
		if (strcmp(name, "q") == 0)
			if (count < 5)
				printf("최소 5명을 입력하세요.\n");
			else {
				printf("종료합니다.\n");
				break;
			}
		else {
			intsert_call(&phone, NULL, create_call(name));
			count++;
		}
	}
	display(phone);
}