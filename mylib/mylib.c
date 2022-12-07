#include <stdio.h>

void printMat(int* M, int N){

    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t", M[N*i+j]);
        }
    }
    printf("]\n");

}

void printVec(int* v, int N){
    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        printf("%d,\t", v[i]);
    }
    printf("]\n");
}

void matVecMult(int* M, int* v, int* Mv, int N){

    for(int i=0; i<N; i++){
        Mv[i]=0;
        for(int j=0; j<N; j++){
            Mv[i] += M[N*i+j] * v[j];
        }
    }

}
