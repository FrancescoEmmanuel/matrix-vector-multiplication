#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "mylib/mylib.h"

#define LOWER 1
#define UPPER 9

int generateRandomInt(int lower, int upper){
    return (rand() % (upper-lower+1)) + lower;
}

void initVec(int* v, int N){
    for(int i=0; i<N; i++){
        v[i] = generateRandomInt(LOWER,UPPER);
    }
}

void initMat(int* M, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            M[N*i+j] = generateRandomInt(LOWER,UPPER);
        }
    }
}



void check_mult_VectMatrix(int *M, int *v, int N, int *vector_expected){
    int *Mv = (int*)malloc(N * sizeof(int));

    if (Mv == NULL){
        printf("Malloc is failed!\n");
        return;
    }
    
    matVecMult(M, v, Mv, N);

    int i;
    for (i = 0; i < N; i++){
        printf(" Expected V[%d] = %-2d; Actual V[%d] = %-2d\n", i, Mv[i], i, vector_expected[i]);
        assert(Mv[i] == vector_expected[i]);
    }
}

int main(){
    int total_test_cases = 3;
    int N = 3;

    int matrix_input_test_case[3][9] = {
        {9, 2, 1, 2, 7, 3, 3, 10, 5},
        {7, 5, 2, 1, 8, 5, 5, 3, 14},
        {5, 8, 2, 3, 6, 4, 1, 4, 8}
    };

    int vector_input_test_case[3][3] = {
        {6, 13, 5},
        {8, 6, 10},
        {3, 9, 12},
    };

    int vector_expected_test_case[3][3] = {
        {85, 118, 173},
        {106, 106, 198},
        {111, 111, 135}
    };

    int i;
    for (i = 0; i < total_test_cases; i++)
    {
        printf("Test #%d:\n", i + 1);

        check_mult_VectMatrix(
        matrix_input_test_case[i],
        vector_input_test_case[i],
        N,
        vector_expected_test_case[i]
        );
         
        printf("\n");
    }

    return 0;
}