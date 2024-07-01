#include<stdio.h>
main()
{
	FILE* fp;
	char str[256];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("‘•”õ1:%s\n", str);
	fscanf(fp, "%s", str);
	printf("‘•”õ2:%s\n", str);
	fscanf(fp, "%s", str);
	printf("‘•”õ3:%s\n", str);
	int lv,hp;
	char c,equip[100];
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("Lv:%d HP:%d ‘•”õ:%s\n", lv,hp,equip);
	c = fgetc(fp);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);
	fclose(fp);
}