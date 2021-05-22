#include<stdio.h>

int solution_BinaryGap(int N) {
	int counter = 0, counter_max = 0;
	int array[1000];
	int loop;
	int flag = 0;

	for (loop = 0; N > 0; loop++) {
		//Convert the decimal number to binary
		array[loop] = N % 2;
		N = N / 2;

		if (array[loop] == 1) {
			flag = 1; // Flag is used as the binary is saved in reverse order and counter should start only after the first 1 value bit is received


			if (counter > counter_max) {
				counter_max = counter;
			}
			counter = 0;
		}
		else if (flag == 1) {
			counter++;
		}

		printf("%d ", array[loop]);

	}
	printf("\n %d", counter_max);
	getch();
	return counter_max;
	



}
