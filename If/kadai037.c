#include<stdio.h>
main()
{
	int num;
	printf("0����100�܂ł̐����H");
	scanf("%d", &num);
	if (90 <= num && num <= 100) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else if (80 <= num && num < 90) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if (50 <= num && num < 80) {
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (30 <= num && num < 50) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
}