#include<stdio.h>
main()
{
	int i = 0, a = 0, c[10];
	while (a != -999) {
		printf("����(-999�ŏI��)?");
		scanf("%d", &a);
		c[i] = a;
		i++;
	}
	printf("�z��c=");
	for (int j = 0; j < i-1; j++) {
		printf("%d ", c[j]);
	}
}
