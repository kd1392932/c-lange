#include<stdio.h>
main()
{
	char co;
	for (co = 0x20; co <= 0x7e; co++) {
		printf("%x %c ", (int)co, co);
		if((co+9)%10==0){
			printf("\n");
		}
	}
}