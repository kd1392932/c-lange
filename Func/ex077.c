#include<stdio.h>
void maxmin(int* a, int* b, int* c, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("�������O����:");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(&a, &b, &c, &max, &min);
	printf("�ő�l=%d �ŏ��l=%d", max, min);
}

void maxmin(int* a, int* b, int* c, int* max, int* min)
{
	*max = (*a > *b) ? (*a > *c ? *a : *c) : (*b > *c ? *b : *c);
	*min = (*a < *b) ? (*a < *c ? *a : *c) : (*b < *c ? *b : *c);
	return;
}