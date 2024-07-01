#include<stdio.h>
main()
{
	char n1,n2,n3,n4;
	n1 = 'A'; n2 = 'a'; n3 = '0'; n4 = ' ';
	printf("A:%d 0x%x B:%d 0x%x\n",n1,n1,n1+1,n1+1);
	printf("C:%d 0x%x a:%d 0x%x\n", n1+2, n1+2, n2, n2);
	printf("b:%d 0x%x c:%d 0x%x\n", n2+1, n2+1, n2+2, n2+2);
	printf("0:%d 0x%x 1:%d 0x%x\n", n3, n3, n3 + 1, n3 + 1);
	printf("2:%d 0x%x  :%d 0x%x\n", n3+2, n3+2, n4, n4);
}