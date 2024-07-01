#include<stdio.h>
main()
{
	int deta[10] = { 10,20,30,40,50,60,70,80,-999 };
	int i,*p_deta=deta;
	printf("ポインタを固定で表示\n");
	for (i = 0; i < 8; i++) {
		printf("%d ",deta[i]);
	}
	printf("\nポインタを変化させて表示\n");
	while (*p_deta!=-999) {
		printf("%d ", * p_deta++);
	}
}