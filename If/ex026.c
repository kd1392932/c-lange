#include<stdio.h>
main()
{
	int mo;
	printf("�������:");
	scanf("%d", &mo);
	if (mo == 1|| mo==3 || mo== 5 || mo== 7 || mo== 8 || mo==10 || mo==12) {
		printf("�ŏI����31���ł�");
	}
	else if(mo==2){
		printf("�ŏI����28���ł�");
	}
	else {
		printf("�ŏI����30���ł�");
	}
}