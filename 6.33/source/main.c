#include<stdio.h>
#include<stdlib.h>
#define SIZE 15

size_t binarysearch(const int b[], int searchkey, size_t  low, size_t high);
void printheader(void);
void printrow(const int b[], size_t low, size_t mid, size_t high);

int main(void)
{
	int a[SIZE];
	size_t i;
	int key;
	size_t result;

	for (i = 0; i < SIZE; ++i){
		a[i] = 2 * i;
	}

	printf("%s", "Enter anumber bewteem 0 and 28:  ");
	scanf("%d", &key);

	printheader();

	result = binarysearch(a, key, 0, SIZE - 1);

	if (result != -1){
		printf("\n%d found in array element %d\n", key, result);
	}
	else{
		printf("\n%d not found\n", key);
	}
	system("pause");
	return 0;
}

size_t binarysearch(const int b[], int searchkey, size_t  low, size_t high)
{
	int middle;
	middle = (low + high) / 2;
	printrow(b, low, middle, high);
	if (low <= high){
		if (searchkey == b[middle]){
			return middle;
		}
		else if (searchkey < b[middle]){
			binarysearch(b, searchkey, low, middle - 1);
		}
		else{
			binarysearch(b, searchkey, middle + 1, high);
		}
	}
	else {
		return -1;
	}
}

void printrow(const int b[], size_t low, size_t mid, size_t high)
{
	size_t i;
printf("\n");
	for (i = 0; i < SIZE; ++i){
		if (i < low || i>high){
			printf("%s", "   ");
		}
		else if (i == mid){
			printf("%3d*", b[i]);
		}
		else {
			printf("%3d", b[i]);
		}
	}
}

void printheader(void)
{
	unsigned int i;

	puts("\nSubscripts:  ");

	for (i = 0; i < SIZE; ++i){
		printf("%3d", i);
	}

	puts("");

	for (i = 1; i <= 4 * SIZE; ++i){
		printf("%s", "-");
	}

	puts("");
}
