#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i=0, k[20];
	char s[20];
	printf("���������͂��Ă���������");
	scanf("%s", &s);
	while (s[i] != '\0') {
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);
		i++;
	}
	printf("�������ςݕ�����́A");
	for (i = 0; s[i] != '\0';i++) {
		printf("%c", s[i]-k[i]);
	}
}