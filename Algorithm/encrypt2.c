#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i = 0, n, k[20];
	char s[20];
	srand(time(0));
	rand();
	printf("���������͂��Ă���������");
	scanf("%s", &s);
	printf("�Í���������́A");
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		printf("%c", s[i]);
		i++;
	}
	printf("\n�Í����L�[�́A");
	for (n = 0;k[n]!=k[i]; n++) {
		printf("%d", k[n]);
	}
}