#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 13

int main(void)
{
	int i;
	int first,second,b;
	int a[SIZE] = { 0 };
	
	srand(time(NULL));

	for (i = 0; i < 36000; i++){
		first =1+ rand() % 6 ;
		second =1+ rand() % 6;
		b = first + second;
		++a[b];
	}

	for (i = 1; i < SIZE; i++){
		printf("%d  出現的次數 %d\n",i, a[i]);
	}
	system("pause");
	return 0;
}