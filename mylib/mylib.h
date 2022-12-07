int generateRandomInt(int lower, int upper);
void initMat(int* M, int N);
void initVec(int* v, int N);
void printMat(int* M, int N);
void printVec(int* v, int N);
void matVecMult(int* M, int* v, int* Mv, int N);
void test_multiply_vector_matrix(int *M, int *v, int N, int *vector_expected);