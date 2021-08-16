#include<stdio.h>
#include"BinaryGap.h"
#include"CyclicRotation.h"
#include"OddOccurrencesInArray.h"
#include"FrogJmp.h"
#include"PermMissingElem.h"
#include"TapeEquilibrium.h"
#include"MissingPositiveNr.h"
#include"CountDiv.h"
#include"MinAvgTwoSlice.h"
#include"test.h"
#include"Distinct.h"

int main() {
	int A[] = {1,1,1,1,1,1,1};
	int odd_Array[]= {1,2,1,2,3,4,5,3,4,5,6,6,6,7,6,7,233};
	int odd_Array_Size = sizeof(odd_Array) / sizeof(int);
	int N =  sizeof(A) / sizeof(int);
	int K = 2;
	struct Results res;
	int odd_Value = 0;
	int FrogJmp = 0;
	int MissingElem = 0;
	int TapeEquilibrium_Diff = 0;
	int MissingPNr = 0;
	int CountDiv = 0;
	int Start = 6;
	int End = 10;
	int StartingPos = 0;
	int Distinct = 0;



	//solution_BinaryGap(555);
	/*
	printf("Odd Array is: \n");
	printArray(A, sizeof(A) / sizeof(int));
	res = solution_CyclicRotation(A, N, K);
	printf("Number of Right Rotation  is: %d\n",K);
	printf("Rotated Array is: \n");
	printArray(A, sizeof(A) / sizeof(int));
	*/

	//odd_Value = solution_OddOccurrencesInArray(odd_Array, odd_Array_Size);
	//printf("Odd Value is: %d\n", odd_Value);

	//FrogJmp = solution_FrogJmp(10, 85, 30);

	//MissingElem = solution_PermMissingElem(A, 7);

	//TapeEquilibrium_Diff = solution_TapeEquilibrium(A, sizeof(A) / sizeof(int));

	//MissingPNr = MissingPositiveNr(A, sizeof(A) / sizeof(int));

	//printf("MissingPNr is: %d\n", MissingPNr);

	//char_array(A, A, sizeof(A) / sizeof(int));

	//CountDiv = solution_CountDiv(Start, End, K);
	//StartingPos = solution_MinAvgTwoSlice(A, sizeof(A) / sizeof(int));
	Distinct = solution_Distinct(A, sizeof(A) / sizeof(int));
}
