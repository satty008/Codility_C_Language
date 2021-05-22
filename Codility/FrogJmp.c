#include<stdio.h>
int solution_FrogJmp(int X, int Y , int D) {
    if (((Y - X) % D) == 0) {
        return (Y - X) / D;
    }
    else {
        return ((Y - X) / D) + 1;
    }


}