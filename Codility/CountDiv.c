#include<stdio.h>

/*
//Brute Solution
int solution_CountDiv(int A, int B, int K) {
	int i =  0;
	int count = 0;
	//Go through the numbers in the given range. If divisible -> Increase count
	//Problem-> Timeout error
	for (i = A; i <= B; i++) {
		if (i % K == 0) {
			count = count + 1;
		}
		else {
		}

	}
	printf("Nr. of integers divisible by %d is: %d\n", K, count);
	return count;

}
*/

//Efficient Solution
int solution_CountDiv(int A, int B, int K) {

	//For numbers between A and B -> Divisibles -> (B/K) - (A/K)
	//If any edge is divisible by K -> We add 1 to count
	int count = (B/K) - (A/K); 
		if (A % K == 0) {
			count = count + 1;
		}
		else {
		}

	printf("Nr. of integers divisible by %d is: %d\n", K, count);
	return count;

}
