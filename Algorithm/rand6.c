#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p,c,v; 
	printf("何を出しますか？\n（1:グー ２:チョキ ３:パー）>");
	scanf("%d", &p);
	if (p == 1) printf("プレイヤーは、グーです。");
	if (p == 2) printf("プレイヤーは、チョキです。");
	if (p == 3) printf("プレイヤーは、パーです。");
	c = rand() % 3;
	if (c == 0) printf("コンピュータは、グーです。");
	if (c == 1) printf("コンピュータは、チョキです。");
	if (c == 2) printf("コンピュータは、パーです。");
	v = (p - c) % 3;
	if (v == 0) {
		printf("プレイヤーの勝ちです。");
	}
	else if(v == 1){
		printf("aikoです。");
	}
	else{
		printf("コンピュータの勝ちです。");
	}
}