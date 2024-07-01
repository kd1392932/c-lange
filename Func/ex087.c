#include<stdio.h>
#include<stdlib.h>
int atoi(const char* str);
main(int argc,char *argv[])
{
	int sum;
	if (argc == 3) {
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%s+%s=%d", argv[1], argv[2], sum);
	}
	else {
		printf("“ñ‚Â‚Ìˆø”‚ğİ’è‚µ‚ÄÀs‚µ‚Ä‚­‚¾‚³‚¢B");
	}
}