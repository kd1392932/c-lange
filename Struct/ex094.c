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
		printf("���O:");
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē���:");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^:");
		scanf("%s", p->blood);	
		p++;
	}
	p = men;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood,"A") == 0) {
			printf("���O%s--\t", p->name);
			printf("%d�N%d��%d����--\t", p->birth[0], p->birth[1], p->birth[2]);
			printf("���t�^%s�^\n", p->blood);
		}
		p++;
	}
}