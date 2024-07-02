#include<stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result=0;

	do {
		printf("\n\n���G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n�� �� �� �L���[����t�ł� �� �� ��\n");
			}
			else {
				display();
			}
		}

		if (result == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�� �� �� �L���[����ł� �� �� ��\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;

	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf("��head�������Ă��鏊(����head��%d)", head);
		}
		if (i == tail) {
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

int enqueue(int d)
{
	if ((tail+1) > QUEUESIZE) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}

int dequeue(int* pd)
{
	if (tail == head) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;
	return 0;
}