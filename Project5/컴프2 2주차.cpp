#include <stdio.h>
#include <string.h>

int main() {
    /*int arr[3]; // arr�� ������� 12

    int *pa = arr; // pa�� ������� 4

    printf("%d %d", sizeof(arr), sizeof(pa));

    int arr[3];

    int *pa = arr;



    pa = pa + 1;

    printf("%u ", pa); // (arr+1)�� �ּҰ��� ����



    //arr = arr + 1;

    printf("%u ", arr + 1); // (arr+1)�� �ּҰ��� ����*/

    double arrd[4] = { 12.4, 23.1, 15.7, 31.2 };

    double* pb = arrd;

    for (int i = 0; i < sizeof(arrd) / sizeof(double); i++)
        printf("%.1f ", *(pb + i)); //������� pb�� ���� ���
    printf("\n");

    const char* p = "banana";
    for (int i = 0; i < strlen(p); i++) { //p�� ���̸�ŭ �ݺ��Ѵ�(6�� ����ϱ� ����)
        for (int j = i; j < strlen(p); j++) // i��°���� p�� ���̸�ŭ �ݺ��Ѵ�
            printf("%c", p[j]);
        printf("\n");
    }

    char s1[] = "computerprogramming";
    for (int i = 0; i < sizeof(s1) / sizeof(char); i++)
        if (s1[i] == 'e')
            printf("ó������ e�� ���� ��ġ�� %d�Դϴ�.\n", i);
    const char* s = "computerprogramming";
    for (int i = 0; i < sizeof(s) / sizeof(char); i++)
        if (s[i] == 'e')
            printf("ó������ e�� ���� ��ġ�� %d�Դϴ�.\n", i);
}