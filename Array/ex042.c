#include<stdio.h>
main()
{
	int i;
	char box[5],*buf="Apple";
	box[0] = 'A';
	box[1] = 'p';
	box[2] = 'p';
	box[3] = 'l';
	box[4] = 'e';
		printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	for (i = 0; i <= 4; i++) {
		printf("%c", box[i]);
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", buf);
}