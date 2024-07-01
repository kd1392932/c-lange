#include<stdio.h>
struct syohin_deta {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_deta syohin[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syohin_deta* p;
	int i;
	for (i = 0; i < 3; i++) {
		p = &syohin[i];
		printf("商品名:%s\t",p->name);
		printf("単価:%4d\t", p->tanka);
		printf("個数:%4d\t", p->kosuu);
		printf("金額:￥%4d\n", p->tanka * p->kosuu);
	}
}