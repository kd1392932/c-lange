#include<stdio.h>
main()
{
	int num, p, y;
	num = 0;
	while(num!=-999){
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", & num);
		p = num; y = num;
		if (num != -999) {
			printf("8�i��=%o 16�i��=%x\n", p, y);
		}
	}
}