#include <stdio.h>
#include <stdlib.h>  // rand()함수를 포함하는 라이브러리
#include <time.h>   // time()함수를 포함하는 라이브러리
#include <string.h>


int main(void) {

	srand(time(NULL)); // 매번 다른 난수가 발생하도록 하기 위해서 사용
	char ch[10];

	int random = 0;
	int win = 0, draw = 0, lose = 0;

	while (lose == 0) {
		random = rand() % 3 + 1; //바위는 1 가위는 2 보는 3
		printf("가위 바위 보 중 입력 : ");
		gets_s(ch, sizeof(ch));
		if (strcmp(ch, "바위") == 0) {
			if (random == 1) {
				draw++;
				printf("당신은 %s선택, 컴퓨터는 바위 선택, 비겼습니다.\n", ch);
			}
			else if (random == 2) {
				win++;
				printf("당신은 %s선택, 컴퓨터는 바위 선택, 이겼습니다.\n", ch);
			}

			else {
				lose++;
				printf("당신은 %s선택, 컴퓨터는 바위 선택, 당신이 졌습니다.\n", ch);
				break;
			}
		}
		else if (strcmp(ch, "가위") == 0) {
			if (random == 1) {
				printf("당신은 %s선택, 컴퓨터는 가위 선택, 당신이 졌습니다.\n", ch);
				lose++;
				break;
			}
			else if (random == 2) {
				draw++;
				printf("당신은 %s선택, 컴퓨터는 가위 선택, 비겼습니다.\n", ch);
			}
			else {
				printf("당신은 %s선택, 컴퓨터는 가위 선택, 이겼습니다.\n", ch);
				win++;
			}

		}
		else if (strcmp(ch, "보") == 0) {
			if (random == 1) {
				printf("당신은 %s선택, 컴퓨터는 보 선택, 이겼습니다.\n", ch);
				win++;
			}

			else if (random == 2) {
				printf("당신은 %s선택, 컴퓨터는 보 선택, 당신이 졌습니다.\n", ch);
				lose++;
				break;
			}
			else {
				printf("당신은 %s선택, 컴퓨터는 보 선택, 비겼습니다.\n", ch);
				draw++;
			}

		}
		else
			printf("다시입력하세요,\n");
	}
	printf("게임의 결과 : %d승, %d무\n", win, draw);
}