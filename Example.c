#include <stdio.h>

int main() {
	Example05();
}

int Example01() {
	// printf : ���
	// scanf_s : �Է�

	// 0�� �Է��ϸ� "�ȳ��ϼ���"
	// 1�� �Է��ϸ� "�ȳ��� ������"
	// 2�� �Է��ϸ� "��"
	int input = 0;
reinput:
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 0:
		printf("�ȳ��ϼ���");
		break;
	case 1:
		printf("�ȳ��� ������");
		break;
	case 2:
	case 3:
		printf("��");
		break;
	default:
		goto reinput;
	}
}

int Example02() {
	// ���ڸ� �Է¹޾ƶ�
	// 0 ~ 9 ���� ���ڸ� �Է��ϸ�
	//     0, 2, 4, 6, 8 �Է� �� "¦��"
	//     1, 3, 5, 7, 9 �Է� �� "Ȧ��"
	// 0 ~ 9 ���� ���ڰ� �ƴ϶��
	//     "���� ������ ������ϴ�." ���
	//     �ٽ� �Է��ϵ��� goto�� ����ϱ�
	int input;
	reinput:
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &input);

	if (input >= 0 && input <= 9) 
	{
		switch (input % 2) 
		{
		case 0:
			printf("¦��");
			break;
		case 1:
			printf("Ȧ��");
			break;
		}
	}
	else
	{
		printf("���� ������ ������ϴ�.");
		goto reinput;
	}
}

int Example03() {
	for (int standard = 2; standard <= 9; standard++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", standard, i, standard * i);
		}
	}

	// ���ڸ� �Է����ּ��� : 2
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
	printf("�ﰢ�� ũ�⸦ �Է����ּ��� : ");
	scanf_s("%d", &size);



	// ���� �Ͻźе� --				
	// �ﰢ�� ũ�⸦ �Է����ּ��� : 5	
	//     *
	//    **						
	//   ***						
	//  ****						
	// *****						

	// �� �� �� �غ��Կ� --
	// �ﰢ�� ũ�⸦ �Է����ּ��� : 5
	// ������
	// �����
	// ***
	// **
	// *
}

int Example05() {
	int size;
	printf("���ڸ� �Է����ּ��� : ");
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