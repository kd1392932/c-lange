#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int dice;

	srand(time(0));
	rand();
	dice = rand() % 301-100;//0~5Ç©ÇÁ1~6Ç…
	printf("ÉTÉCÉRÉçÇÕ%dÇ≈Ç∑\n", dice);
}