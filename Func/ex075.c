#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int * sk, int *syo,int *amr);
main()
{
	int a, b, c, d, e, f,g;
	printf("数値1？:");
	scanf("%d", &a);
	printf("数値2？:");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f,&g);
	puts("数値1と数値2の四則演算");
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