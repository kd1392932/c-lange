#include<stdio.h>
main()
{
	int i=0;
	char s[999];
	printf("�Í������������͂��Ă���������");
	scanf("%s", &s);
	printf("������������́A");
	while (s[i] != '\0') {
		s[i] = s[i] - 0x01;
		printf("%c", s[i]);
		i++;
	}
}