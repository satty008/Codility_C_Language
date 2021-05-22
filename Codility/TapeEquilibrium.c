#include<stdio.h>
int solution_TapeEquilibrium(int A[], int N) {
	int i;
	int P;
	int diff;
	int result;
	int sum2 = 0;
	int sum = 0;

	for (i = 0; i < N; i++) {
		sum = sum + A[i];
	}

	result = abs(sum - A[0] - A[0]);
	printf("Initial Result: %d\n", result);

	for (P = 1; P < N; P++) {
		sum2 = sum2 + A[P - 1];
		
		diff = abs(sum - sum2 - sum2);
		
		if (diff < result)
		{
			result = diff;

		}
		printf("Difference: %d\n", diff);
		printf("Result: %d\n", result);

	}
	return result;
	}