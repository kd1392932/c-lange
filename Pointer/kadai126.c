#include<stdio.h>
main()
{
	int deta[10] = { 10,9,1,20,45,21,38,45,88 };
	int i,max=0,min=999,*p_deta=deta;
	printf("deta[]=");
	for (i = 0; i < 9; i++) {
		printf("%d ",deta[i]);
	}
	for (i = 0; i < 9; i++) {
		if (max < *(p_deta+i)) { max = *(p_deta+i); }
		if (min > *(p_deta+i)) { min = *(p_deta+i); }
	}
	printf("\nÅ‘å’l%d\nÅ¬’l=%d", max, min);
}