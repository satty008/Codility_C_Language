#include<stdio.h>

//compare fn() used by qsort fn()
int compare(const void* a, const void* b)
{
	int int_a = *((int*)a);
	int int_b = *((int*)b);

	if (int_a == int_b) return 0;
	else if (int_a < int_b) return -1;
	else return 1;
}

int solution_Distinct(int A[], int N) {
	// write your code in C++14 (g++ 6.2.0)
	if (N<=0) return 0;
	qsort(A, N, sizeof(int), compare);
	int result = 0;
	for (int i = 0; i < N; ++i)
	{
		if (A[i] != A[i + 1])
			++result;
	}

	if (result > 0) {
		printf("Number of Distinct Values is/are: %d\n", result);
		return result;
	}
	else {
		//In this case, result is never incremented -> only one unique value present
		printf("Number of Distinct Values is/are: %d\n", result);
		return 1;
	}
	//return result > 0 ? result : 1;
}


/*
int solution_Distinct(int A[], int N) {
	// write your code in C++14 (g++ 6.2.0)
	if (N<=0) return 0;
	std::sort(A.begin(), A.end());
	int result = 0;
	for (std::size_t i = 0; i < A.size(); ++i)
	{
		if (A[i] != A[i + 1])
			++result;
	}
	return result > 0 ? result : 1;
}
*/