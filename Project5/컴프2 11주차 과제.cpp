#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	FILE* fp = fopen("test.txt", "w+");
	char str1[100];
	char str2[100];
	char str3[100];
	gets_s(str1);
	gets_s(str2);
	gets_s(str3);
	fprintf(fp, "%s\n", str1);
	fprintf(fp, "%s\n", str2);
	fprintf(fp, "%s", str3);
	fseek(fp, 0, SEEK_SET);
	int line = 0;
	char temp[100];
	while (!feof(fp)) {
		fgets(temp, sizeof(temp), fp);
		line++;
	}
	char* str[3];
	fseek(fp, 0, SEEK_SET);
	if (line > 3) {
		*str = (char*)realloc(str, sizeof(char) * line);
		for (int i = 0; i < line; i++) {
			fgets(temp, sizeof(temp), fp);
			str[i] = (char *)malloc(sizeof(temp));
			strcpy(str[i], temp);
		}
		for (int j = line; j >= 0; j--)
			printf("%s\n", str[j]);
		for (int i = 0; i < line; i++) {
			free(str[i]);
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			fgets(temp, sizeof(temp), fp);
			str[i] = (char*)malloc(sizeof(temp));
			strcpy(str[i], temp);
		}
		for (int j = 2; j >= 0; j--)
			printf("%s\n", str[j]);
		for(int i = 0; i < 3; i++)
			free(str[i]);
	}
	fclose(fp);
}