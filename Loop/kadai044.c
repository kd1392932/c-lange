#include<stdio.h>
main()
{
	int num, p, y;
	num = 0;
	while(num!=-999){
		printf("整数(-999で入力終了)？");
		scanf("%d", & num);
		p = num; y = num;
		if (num != -999) {
			printf("8進数=%o 16進数=%x\n", p, y);
		}
	}
}