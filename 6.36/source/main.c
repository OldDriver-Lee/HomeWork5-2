#include<stdio.h>
#include<stdlib.h>
void stringreverse(char a[],int b);

int main(void)
{
	int i=0;
	char string[] = { NULL};
	printf("enter a string(enter 0 to end):  ");
	
	do {
		i++;
		scanf("%c", &string[i]);
	} while (string[i] != '0');

	printf("%s", string);

	stringreverse(string,i-1);

	system("pause");
	return 0;
}

void stringreverse(char a[], int b)
{
	int z;
	if (b != 0){
		printf("%c", a[b]);
		z = b - 1;
		stringreverse(a, z);
	}
	else{
		printf("%c", a[0]);
	}
}

