#include<stdio.h>
main()
{
	float a=0,to=0;
	int i, j, ave=0;
	int x[3][2];
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 2; i++) {
			printf("x[%d][%d]=", j, i);
			scanf("%f", &a);
			to += a;
			ave += 1;
		}
		printf("%d”Ô–Ú‚Ì•½‹Ï=%8.2f\n\n", j, to / ave);
		to = 0;
		ave = 0;
	}
}