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
	{ {1,"–kŠC“¹",NULL},{2,"ÂXŒ§",NULL},{3,"ŠâŽèŒ§",NULL} ,{4,"‹{éŒ§",NULL} ,{5,"H“cŒ§",NULL}
	,{6,"ŽRŒ`Œ§",NULL} ,{7,"•Ÿ“‡Œ§",NULL},{DETA_END,"",NULL} };
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