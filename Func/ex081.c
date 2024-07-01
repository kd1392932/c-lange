#include<stdio.h>
int Get_max(int *array,int size);
int Get_min(int *array,int size);
main()
{
	int deta[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d", Get_max(deta,8));
	printf("Å¬’l=%d", Get_min(deta,8));
}

int Get_max(int *array, int size)
{
	int max,i;
	for (max = *array, i = 1; i < size; i++) {
		if (max < *(array + i)) {
			max = *(array + i);
		}
	}
	return max;
}
int Get_min(int *array, int size)
{
	int min, i;
	for (min = *array, i = 1; i < size; i++) {
		if (min > *(array + i)) {
			min = *(array + i);
		}
	}
	return min;
}