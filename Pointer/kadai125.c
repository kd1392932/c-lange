#include<stdio.h>
main()
{
	int deta[10] = { 10,20,30,40,50,60,70,80,-999 };
	int i,*p_deta=deta;
	printf("�|�C���^���Œ�ŕ\��\n");
	for (i = 0; i < 8; i++) {
		printf("%d ",deta[i]);
	}
	printf("\n�|�C���^��ω������ĕ\��\n");
	while (*p_deta!=-999) {
		printf("%d ", * p_deta++);
	}
}