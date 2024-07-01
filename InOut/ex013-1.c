#include<stdio.h>
main()
{
	char moji1, moji2;
	moji1 = '5';
	moji2 = '6';
	printf("%cÅ~%c=%d\n", moji1, moji2, (0x35-0x30) * (0x36-0x30));//0x35=53,0x36=54,53*54 5*6//
}