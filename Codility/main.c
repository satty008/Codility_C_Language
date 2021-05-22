#include<stdio.h>
#include"BinaryGap.h"
#include"CyclicRotation.h"
#include"OddOccurrencesInArray.h"
#include"FrogJmp.h"
#include"PermMissingElem.h"
#include"TapeEquilibrium.h"

int main() {
	int A[] = {1,2,4,5,6,7,8};
	int odd_Array[]= {1,2,1,2,3,4,5,3,4,5,6,6,6,7,6,7,233};
	int odd_Array_Size = sizeof(odd_Array) / sizeof(int);
	int N = 8;// sizeof(A) / sizeof(int);
	int K = 5;
	struct Results res;
	int odd_Value = 0;
	int FrogJmp = 0;
	int MissingElem = 0;
	int TapeEquilibrium_Diff = 0;



	//solution_BinaryGap(32);
	//res = solution_CyclicRotation(A, N, K);

	//odd_Value = solution_OddOccurrencesInArray(odd_Array, odd_Array_Size);
	//printf("Odd Value is: %d\n", odd_Value);

	//FrogJmp = solution_FrogJmp(10, 85, 30);

	//MissingElem = solution_PermMissingElem(A, 7);

	TapeEquilibrium_Diff = solution_TapeEquilibrium(A, sizeof(A) / sizeof(int));

}
