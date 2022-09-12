#include <stdio.h>
#include <string.h>

int main() {
    /*int arr[3]; // arr의 사이즈는 12

    int *pa = arr; // pa의 사이즈는 4

    printf("%d %d", sizeof(arr), sizeof(pa));

    int arr[3];

    int *pa = arr;



    pa = pa + 1;

    printf("%u ", pa); // (arr+1)의 주소값이 나옴



    //arr = arr + 1;

    printf("%u ", arr + 1); // (arr+1)의 주소값이 나옴*/

    double arrd[4] = { 12.4, 23.1, 15.7, 31.2 };

    double* pb = arrd;

    for (int i = 0; i < sizeof(arrd) / sizeof(double); i++)
        printf("%.1f ", *(pb + i)); //순서대로 pb의 값을 출력
    printf("\n");

    const char* p = "banana";
    for (int i = 0; i < strlen(p); i++) { //p의 길이만큼 반복한다(6번 출력하기 위해)
        for (int j = i; j < strlen(p); j++) // i번째부터 p의 길이만큼 반복한다
            printf("%c", p[j]);
        printf("\n");
    }

    char s1[] = "computerprogramming";
    for (int i = 0; i < sizeof(s1) / sizeof(char); i++)
        if (s1[i] == 'e')
            printf("처음으로 e가 나온 위치는 %d입니다.\n", i);
    const char* s = "computerprogramming";
    for (int i = 0; i < sizeof(s) / sizeof(char); i++)
        if (s[i] == 'e')
            printf("처음으로 e가 나온 위치는 %d입니다.\n", i);
}