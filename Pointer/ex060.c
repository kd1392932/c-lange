#include<stdio.h>
main()
{
	char deta[10] = "Language";
	char *p_deta;
	char moji;
	p_deta = deta;
	printf("deta[]=%s\n", p_deta);
	printf("検索結果は？　");
	scanf("%c", &moji);
	int i;
	i = 0;
	printf("検索結果は、");
	while (deta[i] != '\0') {
		if (deta[i] == moji) {
			printf("%d ", i+1);
		}
		i++;
	}
	printf("文字目です。");
}