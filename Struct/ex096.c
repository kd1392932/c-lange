#include<stdio.h>
struct syohin_deta {
	char name[20];
	int tanka;
};

void display3(struct syohin_deta *p);

main()
{
	struct syohin_deta syohin = { "ƒPƒVƒSƒ€",50 };
	
	display3(&syohin);
}

void display3(struct syohin_deta *p)
{
	printf("%s %d\n", p->name,p->tanka);
}