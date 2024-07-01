#include<stdio.h>
long bekijou(int* a, int* b);
main()
{
	int a, b;
	long kotae;
	printf("”’l1?:");
	scanf("%d", &a);
	printf("”’l2?:");
	scanf("%d", &b);
	kotae=bekijou(&a, &b);
	printf("%d‚Ì%dæ‚ÍA%ld", a, b, kotae);
}

long bekijou(int* a, int* b) {
	long kotae = 1;
	int i;
	for (i = 0; i < *b; i++) {
		kotae *= *a;
	}
	return(kotae);
}