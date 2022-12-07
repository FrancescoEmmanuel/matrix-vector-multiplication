# Scientific Computing: Matrix & Vector Multiplication Benchmark

This program measures space and time complexity as benchmark for matrix and vector multiplication using the C language. 

## Testing
In this section, I created a new function in the main_test.c file called check_mult_VectMatrix() (that takes 4 inputs `M`, `v`, `N`, `vector_expected`), to check whether the matVecMult() function works properly by comparing the result that it produces, by the result that I calculated manually. If the code works and it shows that the actual result matches the expected result, then it indicates that the function works properly. However, if the code produces an "assertion failed" message on the terminal, then the function does not work properly.
<br>
<br>
How to run the code:

```
make test
```


For this test, I used these values for the matrix and vector:
````
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
````

I first calculate the matrix produced when multiplying the matrix and vector to get the expected results, and inputted it inside my code with the vector_expected_test_case() function. The expected results are as follows:
````
int vector_expected_test_case[3][3] = {
        {85, 118, 173},
        {106, 106, 198},
        {111, 111, 135}
    };
````
I then run the code and the results are as follows:

```
Test #1:
 Expected V[0] = 85; Actual V[0] = 85
 Expected V[1] = 118; Actual V[1] = 118
 Expected V[2] = 173; Actual V[2] = 173

Test #2:
 Expected V[0] = 106; Actual V[0] = 106
 Expected V[1] = 106; Actual V[1] = 106
 Expected V[2] = 198; Actual V[2] = 198

Test #3:
 Expected V[0] = 111; Actual V[0] = 111
 Expected V[1] = 111; Actual V[1] = 111
 Expected V[2] = 135; Actual V[2] = 135
```
This confirms the validity and functionality of the matVecMult()function.

## Benchmark

### Time complexity

Run the code
```
make time
```

When we run the code, the output will yield as follows.

The output indicates that N = 1000 takes 0.00257 seconds to complete running. We can plot different N values which will produce the following graph.

![alt text](https://i.ibb.co/GxfPCC5/Screenshot-2022-12-07-at-23-44-52.png)


### Space complexity

Run the code
```
make space
```

When N = 250, we can examine its space cosumption via task manager, as shown in the screenshot below.

![alt text](https://i.ibb.co/ySxTcby/Screenshot-2022-12-07-at-23-00-46.png)

We can stimulate the program on different values, where N = 250, 500, 1000, 2000, 4000, 10000, and plot it in a graph.

![alt text](https://i.ibb.co/Pwg2DGY/Screenshot-2022-12-07-at-23-48-04.png)
