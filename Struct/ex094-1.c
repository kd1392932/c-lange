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
		{"�A���g"	,{2000,1,1},"A"},
		{"�c�J�T"	,{2008,9,21},"AB"},
		{"�\�E�S"	,{2001,2,11},"B"},
		{"�E�H�Y"	,{1994,2,27},"O"},
		{"�J�Y�}"	,{1984,5,5},"O"} };
	struct profile* p;
	int i;
	p = men;
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2) {
			printf("���O%s--%d�N%d��%d����--���t�^%s�^\n",
				p->name,
				p->birth.nen, p->birth.tuki, p->birth.hi,
				p->blood);
		}
		p++;
	}
}