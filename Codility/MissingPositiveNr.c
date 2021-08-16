#include<stdio.h>
int MissingPositiveNr(int A[], int N) {
	int ContainsOne = 0;
	if (N == NULL || N == 0) return 1;

	//Step 1
	for (int i = 0; i < N; i++) {
		if (A[i] == 1) {
			ContainsOne = 1;
		}
		else if (A[i]<= 0 || A[i] > N) {
			A[i] = 1;
		}
	}
	if (ContainsOne == 0) return 1;

	//Step 2
	for (int i = 0; i < N; i++) {
		int index = abs(A[i]) - 1;
		if (A[index] > 0) {
			A[index] = -1 * A[index];
		}
	}
	//Step 3
	for (int i = 0; i < N; i++) {
		if (A[i] > 0) {
			return i + 1;
		}
	}

	//Step 4
	return N + 1;
}

