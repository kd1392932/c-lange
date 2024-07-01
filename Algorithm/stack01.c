#include<stdio.h>

#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, deta, result;

	do {
		printf("\n\n���v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &deta);
			result = push(deta);
			if (result == -1) {
				printf("\n�������X�^�b�N�������ς��ł�������");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&deta);
			if (result == -1) {
				printf("�������X�^�b�N����ł�������");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", deta);
				display();
			}
		}
	} while (key != 'e');

}

//�X�^�b�N�\���֐�
void display(void)
{
	int i;
	printf("\n===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��sp�������Ă��鏊(����sp��%d)", sp);
		}
		printf("\n");
	}
	return;
}

//�X�^�b�N�Ƀf�[�^��ς�(�v�b�V������)�֐�
int push(int d)
{
	if (sp >= STACKSIZE) { return - 1; }
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int* pd)
{
	if (sp <= 0) { return -1; }
	sp--;
	*pd= stack[sp];
	stack[sp] = 0;
	return 0;
}