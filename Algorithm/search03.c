#include<stdio.h>
main()
{
	int i, s, low, mid, high;
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("�T���ls�����->");
	scanf("%d", &s);

	low = 0;
	high = 10;

	for (i = 0; i <= 10; i++) {
		mid = (low + high) / 2;
		if (d[mid] == s) {
			break;
		}
		if (d[mid] < s) {
			low = mid + 1;
		}
		if (d[mid] > s) {
			high = mid - 1;
		}
	}
	if (low>high) {
		printf("������Ȃ�����");
	}
	else {
		printf("d[%d]�Ō�������",mid);
	}
}