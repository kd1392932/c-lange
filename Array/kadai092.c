#include<stdio.h>
main()
{
	int i,a[10] = { 10,20,30,40,50,60,70,80,90,100 },c[10];
	printf("�z��a����z��c�ɃR�s�[\n");
	printf("�z��a="); 
	for (i = 0; i <= 9; i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z��c=");
	for (i = 0; i <= 9; i++) {
		printf("%d ", c[i] = a[i]);
	}

}