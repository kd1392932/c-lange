#include<stdio.h>
main()
{
	int i = 0;
	char s[11];
	printf("���������͂��Ă�������");
	scanf("%s", &s);
	printf("�Í���������́A");
	while (s[i] != '\0') {
		s[i] = s[i] + 0x01;
		printf("%c", s[i]);
		i++;
	}
}