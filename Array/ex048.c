#include<stdio.h>
main()
{
	int i, j, k,to=0;
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	for (k = 0; k < 2; k++) {
		printf("�A�p�[�g%d", k);
		for (j = 0; j < 2; j++) {
			printf("(%d�K):", j);
			for (i = 0; i < 3; i++) {
				printf("%d ", a[k][j][i]);
				to += a[k][j][i];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�", to);
}