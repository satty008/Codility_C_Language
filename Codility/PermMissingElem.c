#include<stdio.h>
int solution_PermMissingElem(int A[], int N) {
	int sum = 0;
	int missingElem = 0;
	int i;
	//int A[] = { 1,2,4,5,6,7,8 };
	for (i = 1; i <= N + 1; i++) {
		if (i < N + 1) {
			missingElem = missingElem + A[i - 1];
			printf("Cumulative Result: %d \n", missingElem);
		}

		sum = sum + i;
	}
	missingElem = sum - missingElem;
	printf("Sum: %d\n", sum);

	printf("Missing Element: %d", missingElem);
	return missingElem;
	

}