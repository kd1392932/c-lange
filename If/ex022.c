#include<stdio.h>
main()
{
	int yy;
	printf("êºóÔÇì¸óÕ:");
	scanf("%d", &yy);
	if (yy >= 1989) {
		printf("ïΩê¨ê∂Ç‹ÇÍÇ≈Ç∑\n");
	}
	else if(yy<1926) {
		printf("ëÂê≥ê∂Ç‹ÇÍÇ≈Ç∑\n");
	}
	else {
		printf("è∫òaê∂Ç‹ÇÍÇ≈Ç∑\n");
	}
}