#include<stdio.h>

int solution_OddOccurrencesInArray(int A[], int N) {
    int i;
    int result = 0;
    for (i = 0; i < N; i++)
    {
        result ^= A[i];
    }
    return result;

	
}