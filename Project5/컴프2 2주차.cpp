#include <string.h>

int main() {













    double arrd[4] = { 12.4, 23.1, 15.7, 31.2 };

    double* pb = arrd;

    for (int i = 0; i < sizeof(arrd) / sizeof(double); i++)
        printf("%.1f ", *(pb + i)); //?�서?��?pb??값을 출력
    printf("\n");

    const char* p = "banana";
    for (int i = 0; i < strlen(p); i++) { //p??길이만큼 반복?�다(6�?출력?�기 ?�해)
        for (int j = i; j < strlen(p); j++) // i번째부??p??길이만큼 반복?�다
            printf("%c", p[j]);
        printf("\n");
    }

    char s1[] = "computerprogramming";
    for (int i = 0; i < sizeof(s1) / sizeof(char); i++)
        if (s1[i] == 'e')
            printf("처음?�로 e가 ?�온 ?�치??%d?�니??\n", i);
    const char* s = "computerprogramming";
        if (s[i] == 'e')
            printf("처음?�로 e가 ?�온 ?�치??%d?�니??\n", i);
