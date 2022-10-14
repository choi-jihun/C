#include <stdio.h>
#include <string.h>

void find_name_age(char* buffer, char* name, char* age) {
	int i = 0, j = 0;
	while (buffer[i] != ' ') {
		name[i] = buffer[i];
		i++;
	}
	name[i] = '\0';
	i++;
	
	while (buffer[i] != '\0') {
		age[j] = buffer[i];
		i++;
		j++;
	}
	age[j] = '\0';
}

void cmp_name_age(char* name1, char* name2, char* age1, char* age2) {
	if (strcmp(name1, name2) == 0)
		printf("이름이 같습니다\n");
	else
		printf("이름이 다릅니다.\n");
	if (strcmp(age1, age2) == 0)
		printf("나이가 같습니다.\n");
	else
		printf("나이가 다릅니다.\n");
}

int main() {
	char buffer[40];
	char name1[20];
	char name2[20];
	char age1[20];
	char age2[20];
	gets_s(buffer, sizeof(buffer));
	find_name_age(buffer, name1, age1);;
	gets_s(buffer, sizeof(buffer));
	find_name_age(buffer, name2, age2);
	cmp_name_age(name1, name2, age1, age2);
}

