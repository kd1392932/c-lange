#include<stdio.h>
main()
{
	int i, s, deta[] = { 25,50,69,18,6,35,43,87,71,99 };
	printf("�T���ls�����->");
	scanf("%d", &s);
	

	for (deta[10] = s; i = 0; i <= 10; i++) {
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
}