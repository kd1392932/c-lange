#include<stdio.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile men[5] = {
		{"アルト"	,{2000,1,1},"A"},
		{"ツカサ"	,{2008,9,21},"AB"},
		{"ソウゴ"	,{2001,2,11},"B"},
		{"ウォズ"	,{1994,2,27},"O"},
		{"カズマ"	,{1984,5,5},"O"} };
	struct profile* p;
	int i;
	p = men;
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2) {
			printf("名前%s--%d年%d月%d日生--血液型%s型\n",
				p->name,
				p->birth.nen, p->birth.tuki, p->birth.hi,
				p->blood);
		}
		p++;
	}
}