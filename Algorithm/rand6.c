#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p,c,v; 
	printf("�����o���܂����H\n�i1:�O�[ �Q:�`���L �R:�p�[�j>");
	scanf("%d", &p);
	if (p == 1) printf("�v���C���[�́A�O�[�ł��B");
	if (p == 2) printf("�v���C���[�́A�`���L�ł��B");
	if (p == 3) printf("�v���C���[�́A�p�[�ł��B");
	c = rand() % 3;
	if (c == 0) printf("�R���s���[�^�́A�O�[�ł��B");
	if (c == 1) printf("�R���s���[�^�́A�`���L�ł��B");
	if (c == 2) printf("�R���s���[�^�́A�p�[�ł��B");
	v = (p - c) % 3;
	if (v == 0) {
		printf("�v���C���[�̏����ł��B");
	}
	else if(v == 1){
		printf("aiko�ł��B");
	}
	else{
		printf("�R���s���[�^�̏����ł��B");
	}
}