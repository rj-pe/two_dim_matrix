#include <vector>
using std::vector;

class Matrix
{
public:
  Matrix(int rows, int cols);
  vector< vector < int > > matrix;
  void set_row(int row, vector<double> v);
  int get_row(int row);
  void set_element(int row, int col, double val);
  double get_element(int row, int col);
  int sum();
  double find_max();
  double find_min();
  //string to_string();
private:
  int COL_SIZE = 0;
  int ROW_SIZE = 0;
  void range_error();
  vector <int> var_sum [0];
};
