two_dim_matrix

### data structures project #1

#### description

The problem statement and ideas for this project are taken from Elliot Koffman's
*Objects, Abstraction, Data structures and Design Using C++*.
#### problem statement

Write a main function together with a collection of functions that operates on
a two-dimensional matrix (a global variable) with ROW_SIZE rows and COL_SIZE
columns. The main function should provide calls to each of the functions and
display the results. The functions should have the following declarations:
```c++
void set_row(int row, double row_vals[]);
double* get_row(int row);
void set_element(int row, int col, int val);
double get_element(int row, int col);
double sum();
double find_max();
double find_min();
string to_string();
