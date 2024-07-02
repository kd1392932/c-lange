#include<stdio.h>
main()
{
	int i, s;
	int deta[10] = { 25,50,69,18,6,35,43,87,71,99 };
	printf("�T���ls�����->");
	scanf("%d", &s);
	

	for (i = 0; i <= 9; i++) {
		if (s == deta[i]) {
			break;
		}
	}

	if (i >= 10) {
		printf("����Ȃ�����");
	}
	else {
		printf("deta[%d]�ɂ�����",i);
	}

	return 0;
}