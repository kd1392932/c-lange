#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile men[5];
	struct profile* p;
	int i;
	p = men;
	for (i = 0; i < 5; i++) {
		printf("–¼‘O:");
		scanf("%s", p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^:");
		scanf("%s", p->blood);	
		p++;
	}
	p = men;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood,"A") == 0) {
			printf("–¼‘O%s--\t", p->name);
			printf("%d”N%dŒŽ%d“ú¶--\t", p->birth[0], p->birth[1], p->birth[2]);
			printf("ŒŒ‰tŒ^%sŒ^\n", p->blood);
		}
		p++;
	}
}