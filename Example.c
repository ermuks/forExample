#include <stdio.h>

int main() {
	Example05();
}

int Example01() {
	// printf : 출력
	// scanf_s : 입력

	// 0을 입력하면 "안녕하세요"
	// 1을 입력하면 "안녕히 가세요"
	// 2를 입력하면 "뭐"
	int input = 0;
reinput:
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 0:
		printf("안녕하세요");
		break;
	case 1:
		printf("안녕히 가세요");
		break;
	case 2:
	case 3:
		printf("뭐");
		break;
	default:
		goto reinput;
	}
}

int Example02() {
	// 숫자를 입력받아라
	// 0 ~ 9 범위 숫자를 입력하면
	//     0, 2, 4, 6, 8 입력 시 "짝수"
	//     1, 3, 5, 7, 9 입력 시 "홀수"
	// 0 ~ 9 범위 숫자가 아니라면
	//     "숫자 범위를 벗어났습니다." 출력
	//     다시 입력하도록 goto문 사용하기
	int input;
	reinput:
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &input);

	if (input >= 0 && input <= 9) 
	{
		switch (input % 2) 
		{
		case 0:
			printf("짝수");
			break;
		case 1:
			printf("홀수");
			break;
		}
	}
	else
	{
		printf("숫자 범위를 벗어났습니다.");
		goto reinput;
	}
}

int Example03() {
	for (int standard = 2; standard <= 9; standard++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", standard, i, standard * i);
		}
	}

	// 숫자를 입력해주세요 : 2
	// 2 * 1 = 2
	// 2 * 2 = 4
	// 2 * 3 = 6
	// 2 * 4 = 8
	// 2 * 5 = 10
	// 2 * 6 = 12
	// 2 * 7 = 14
	// 2 * 8 = 16
	// 2 * 9 = 18
}

int Example04() {
	int size;
	printf("삼각형 크기를 입력해주세요 : ");
	scanf_s("%d", &size);



	// 이해 하신분들 --				
	// 삼각형 크기를 입력해주세요 : 5	
	//     *
	//    **						
	//   ***						
	//  ****						
	// *****						

	// 한 번 더 해볼게요 --
	// 삼각형 크기를 입력해주세요 : 5
	// ■■■■■
	// ■■■■
	// ***
	// **
	// *
}

int Example05() {
	int size;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &size);

	for (int i = 0; i < size; i++)
	{
		int blankCount = i - size / 2;
		if (blankCount < 0) 
			blankCount *= -1;
		int fillCount = size - blankCount * 2;

		for (int blank = 0; blank < blankCount; blank++) {
			printf(" ");
		}
		for (int fill = 0; fill < fillCount; fill++) {
			printf("*");
		}
		printf("\n");
	}
}