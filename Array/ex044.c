#include<stdio.h>
main()
{
	char txt[80],mo[80],c[80];
	int i ;
	printf("������1�����:");
	scanf("%s", &txt[0]);
	printf("������2�����:");
	scanf("%s", &mo[0]);
	for (i = 0; txt[i] != '\0'; i++);
	for (i = 0; mo[i] != '\0'; i++);
	printf("moji1=%s �@moji2=%s", &txt[0],&mo[0]);
	printf("\n����ւ����\n");
	for (i = 0; txt[i] != '\0'; i++) {
		c[i] = txt[i];
	}
	c[i] = '\0';
	for (i = 0; mo[i] != '\0'; i++) {
		txt[i] = mo[i];
	}
	txt[i] = '\0';
	for (i = 0; c[i] != '\0'; i++) {
		mo[i] = c[i];
	}
	mo[i] = '\0';
	printf("moji1=%s �@moji2=%s", &txt[0], &mo[0]);
}