#include<stdio.h>
main()
{
	int i,j;
	char a[40], b[20];
	printf("•¶š—ñ‚PH");
	scanf("%s", &a[0]);
	printf("•¶š—ñ‚QH");
	scanf("%s", &b[0]);
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; i++,j++) {
		a[i] = b[j];
	}
	printf("%s", a);
}