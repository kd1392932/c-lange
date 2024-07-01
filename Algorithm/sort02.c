#include<stdio.h>
main()
{
	int i, j, w, d[5] = { 30,7,25,16,10 };
	for (i = 4; i > 0; i--) {
		for (j = 0; j <= i+1; j++) {
			if (d[j] > d[j + 1]) {
				w = d[j];
				d[j] = d[i];
				d[i] = w;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", d[i]);	
	}
}