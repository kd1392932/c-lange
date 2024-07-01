#include<stdio.h>
main()
{
	int i;
	char box[] = "Gamesoft";
	for (i = 0; box[i] != '\0'; i++);
	printf("•¶š—ñ=%s\n", &box[0]);
	printf("•¶š”=%d•¶š", i);
}