#include<stdio.h>
main()
{
	int i, s, deta[] = { 25,50,69,18,6,35,43,87,71,99 };
	printf("’Tõ’ls‚ð“ü—Í->");
	scanf("%d", &s);
	

	for (deta[10] = s; i = 0; i <= 10; i++) {
		if (s == deta[i]) {
			break;
		}
	}

	if (i >= 10) {
		printf("Œ©‚Â‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("deta[%d]‚É‚ ‚Á‚½",i);
	}
}