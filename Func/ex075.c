#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int * sk, int *syo,int *amr);
main()
{
	int a, b, c, d, e, f,g;
	printf("���l1�H:");
	scanf("%d", &a);
	printf("���l2�H:");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f,&g);
	puts("���l1�Ɛ��l2�̎l�����Z");
	printf("wa=%d,sa=%d,sk=%d,syo=%d,amr=%d\n",c,d,e,f,g);
}

void shisoku(int x,int y,int* wa, int* sa, int* sk, int* syo,int*amr)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	*amr = x % y;
	return;
}