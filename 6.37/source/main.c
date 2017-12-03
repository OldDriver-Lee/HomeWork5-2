#include<stdio.h>
#include<stdlib.h>
int recursivemaxmum(int b[], int x,int c);

int main(void)
{
	int a[] = { 0 };
	int b, c = 0;
	int j, i = 0;
	printf("請輸入數值(若要結束請輸入-1):\n");
	do{
		i += 1;
		scanf_s("%d", &b);
		a[i] = b;
	} while (a[i] != EOF);

	c = recursivemaxmum(a, i-1,0);

	printf("最大的數值為%d\n", c);

	system("pause");
}


int recursivemaxmum(int b[], int x,int c)
{
	int z;
	if (x != 0){
		if (b[x] > c){
			c = b[x];
			z = x - 1;
			recursivemaxmum(b, z, c);
		}
		else{
			z = x - 1;
			recursivemaxmum(b, z, c);
		}
	}
	else{
		return c;
	}
}
