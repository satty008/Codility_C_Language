#include<stdio.h>
int solution_MinAvgTwoSlice(int A[], int N) {
	//Math Property
	//Slices of 4 or more numbers always contain a smaller slice with lower avg.
	// This means we have to test slics of 2 or 3 elements 

	//For each element of A, take avg of next three elements(incl. the start pos) and next two elements(incl. the start pos)
	//Edge case : Last slice of 2 elements is not tested in the for loop, so has to be done manually

	float avg_min = 2147483647;
	int StartingPos = 0;


	for (int i = 0; i < N - 1; i++) {
		float sum2 = A[i] + A[i + 1];
		float sum3 = A[i] + A[i + 1] + A[i + 2];
		if (sum2 / 2.0 < avg_min) {
			StartingPos = i;
			avg_min = sum2 / 2.0;
		}

		if (i < N - 2 && sum3 / 3.0 < avg_min) {
			StartingPos = i;
			avg_min = sum3 / 3.0;

		}
	}

	printf("Starting Pos for Min Avg is: %d\n", StartingPos);
	return StartingPos;

}

