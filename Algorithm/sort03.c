#include<stdio.h>
main()
{
	int i, j, w;
	int d[5] = { 30,7,25,16,10 };
	for (i = 0; i < 4; i++) {
		for (j = 0; j <i ; j--) {
			if (d[j + 1] >= d[j]) {
				continue;
			}
			else {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);
	}
}