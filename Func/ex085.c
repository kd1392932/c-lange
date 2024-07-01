#include<stdio.h>
void Str_cat(char* s1, char* s2);
main()
{
	char a[20], b[10];
	printf("”z—ña:");
	scanf("%s", &a);
	printf("”z—ñb:");
	scanf("%s", &b);
	Str_cat(a, b);
	printf("”z—ña:%s", a);
}
void Str_cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
	return;
}