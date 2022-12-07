# Scientific Comuputing: Matrix & Vector Multiplication

This program measures space and time complexity as benchmark for matrix and vector multiplication using the C language. 

## How to run

Run the code

```
make test
```

Here, I created a new function in mylib.c, which checks whether the multiply_vector_matrix() function works properly by comparing the result that it produces by the result that I calculated manually. If it does, then it indicates that the function works correctly. 

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
