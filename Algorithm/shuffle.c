#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,deta[20],target,work=0;
	srand(time(0));
	for (i = 0; i < 20; i++) {
		deta[i]=i+1;
	}
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		work = deta[i] ;
		deta[i] = deta[target] ;
		deta[target] = work;
	}
	for(i=0;i<20;i++){
		printf("%3d ", deta[i]);
	}
}