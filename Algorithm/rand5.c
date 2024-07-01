#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, kazu;
	srand(time(0));
	for (i = 1; i <= 100; i++) {
		rand();
		kazu = rand() % 300 + 1;
		printf("%3d ", kazu);
		if (i >= 10) {
			if (i % 10 ==0) {
				printf("\n");
			}
		}
	}
	printf("\nend.");
}