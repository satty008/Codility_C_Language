#include<stdio.h>
#include"CyclicRotation.h"
struct Results solution_CyclicRotation(int A[], int N, int K) {
	int hold_last = 0;
	int loop,j;
	struct Results res;
	for (j = 1; j <= K; j++) {
		hold_last = A[N - 1];
		for (loop = N - 1; loop >= 1; loop--) {
			A[loop] = A[loop - 1];
		}
		A[loop] = hold_last;
	}
	res.A = A;
	
	return res;

}