#include<stdio.h>
main()
{
	int i, s, deta[] = { 12,16,43,2,61,33,58,93,64,27 };
	printf("’Tõ’ls‚ð“ü—Í->");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == deta[i]) {
			break;
		}
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("deta[%d]‚É‚ ‚Á‚½", i);
	}
}