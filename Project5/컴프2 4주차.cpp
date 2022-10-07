/*#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void swap(const char** s1, const char** s2) {
	const char* temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void count(char* s1, char* s2, int* cnt1, int* cnt2) {
	int count1 = 0, count2 = 0;
	while (*s1) {
		if (*s1 == 'a' || *s1 == 'e' || *s1 == 'i' || *s1 == 'o' || *s1 == 'u')
			count1++;
		*s1++;
	}
	while (*s2) {
		if (*s2 == 'a' || *s2 == 'e' || *s2 == 'i' || *s2 == 'o' || *s2 == 'u')
			count2++;
		*s2++;
	}
	*cnt1 = count1;
	*cnt2 = count2;
}

int main() {
	char s1 [][10] = { "dog","cat","horse","elephant" };
	const char* s2[10] = { {"dog"},{"cat"},{"horse"},{"elephant"} };

	const char* pa = "dog";
	const char* pb = "cat";
	const char** ptr1 = &pa;
	const char** ptr2 = &pb;
	swap(ptr1, ptr2);
	printf("%s %s\n", pa, pb);

	char str1[20];
	char str2[20];
	printf("첫번째 단어 입력 : ");
	scanf("%s", &str1);
	printf("두번째 단어 입력 : ");
	scanf("%s", &str2);
	int cnt1, cnt2;
	count(str1, str2, &cnt1, &cnt2);
	printf("첫번째 단어 모음 수 : %d", cnt1);
	printf("두번째 단어 모음 수 : %d", cnt2);
}*/