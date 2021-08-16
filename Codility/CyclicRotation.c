#include<stdio.h>
#include"CyclicRotation.h"

void reverse(int* Arr, int low, int high) {
	int temp;
	while (low < high) {
		temp = Arr[high];
		Arr[high] = Arr[low];
		Arr[low] = temp;
		low++;
		high--;
	}
}

struct Results solution_CyclicRotation(int A[], int N, int K) {
	struct Results result;
	K = K % N;
	if (N > 0) {
		reverse(A, 0, N - K - 1);
		reverse(A, N - K, N - 1);
		reverse(A, 0, N - 1);
		result.A = A;
		result.N = N;
		return result;
	}
	else {
		result.A = A;
		result.N = N;
		return result;
	}
}

/*
struct Results solution_CyclicRotation(int A[], int N, int K) {
	int hold_last = 0;
	int loop,j;
	struct Results result;
	for (j = 1; j <= K; j++) {
		hold_last = A[N - 1];
		for (loop = N - 1; loop >= 1; loop--) {
			A[loop] = A[loop - 1];
		}
		A[loop] = hold_last;
	}
	result.A = A;
	result.N = N;
	return result;

}
*/
