#include<stdio.h>
#define DETA_END -1

struct ken {
	int code;
	char name[20];
	struct ken *next;
};

main()
{
	struct ken ken_deta[] =
	{ {1,"�k�C��",NULL},{2,"�X��",NULL},{3,"��茧",NULL} ,{4,"�{�錧",NULL} ,{5,"�H�c��",NULL}
	,{6,"�R�`��",NULL} ,{7,"������",NULL},{DETA_END,"",NULL} };
	struct ken* p, * wp;

	p = wp = ken_deta;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DETA_END);

	for (p = ken_deta; p->code != DETA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}