#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;
	printf("* �����̍U���I\n");
	srand(time(0));
	rand();
	k = rand() % 100;
	if (k <= 30) {
		printf("* ��S�̈ꌂ�I\n");
		printf("* �G��%d�̃_���[�W�I\n", k * k*100);
		printf("* YOU WIN!!!");
	}
	else if (k >= 80) {
		printf("* MISS!\n");
		printf("* YOU LOSE...");
	}
	else {
		printf("* HIT!\n");
		printf("* �G��%d�̃_���[�W�I\n", k);
		printf("* YOU WIN");
	}
}