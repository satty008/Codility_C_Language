#include<stdio.h>
char* char_array(int A[], int N) {
	char** str;
	str = malloc(N * sizeof(char*));

	for (int i = 0; i < N; i++) {
		if (A[i] < 0) {
			str[i] = "<";
		}
		else if (A[i] > 0) {
			str[i] = ">";
		}
		else if (A[i] == 0) {
			str[i] = "=";
		}
		else {
		}
	}
	//printf("%d", sum);
	//free(str);
	return str;
}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);

	printf("\n");
}