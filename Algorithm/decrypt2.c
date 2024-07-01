#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i=0, k[20];
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	while (s[i] != '\0') {
		printf("s[%d]‚Ì•œ†‰»ƒL[„", i);
		scanf("%d", &k[i]);
		i++;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA");
	for (i = 0; s[i] != '\0';i++) {
		printf("%c", s[i]-k[i]);
	}
}