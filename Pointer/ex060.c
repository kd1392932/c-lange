#include<stdio.h>
main()
{
	char deta[10] = "Language";
	char *p_deta;
	char moji;
	p_deta = deta;
	printf("deta[]=%s\n", p_deta);
	printf("�������ʂ́H�@");
	scanf("%c", &moji);
	int i;
	i = 0;
	printf("�������ʂ́A");
	while (deta[i] != '\0') {
		if (deta[i] == moji) {
			printf("%d ", i+1);
		}
		i++;
	}
	printf("�����ڂł��B");
}