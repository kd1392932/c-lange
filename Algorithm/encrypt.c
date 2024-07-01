#include<stdio.h>
main()
{
	int i = 0;
	char s[11];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);
	printf("ˆÃ†‰»•¶š—ñ‚ÍA");
	while (s[i] != '\0') {
		s[i] = s[i] + 0x01;
		printf("%c", s[i]);
		i++;
	}
}