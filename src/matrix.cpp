#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "matrix.h"
using std::vector;

Matrix::Matrix(int rows, int cols)
{
  COL_SIZE = cols;
  ROW_SIZE = rows;
  matrix.resize(rows);
  for (int i = 0; i < rows; ++i)
    matrix[i].resize(cols);
}
  //setters & getters
void Matrix::set_row(int row, std::vector<double> v )
{
  int ubound = v.size();
  if( (ubound == this->COL_SIZE) && (row < this->ROW_SIZE) )
  {
    for (int i = 0; i < ubound; i++)
    {
      matrix[row][i] = v.at(i);
    }
  }
  else
  {
    Matrix::range_error();
  }
}
//retrieve specified row and print to terminal
int Matrix::get_row(int row)
{
  if(row <= ROW_SIZE)
  {
    for (int i=0; i < COL_SIZE; i++)
    std::cout<<matrix[row][i]<<"\n" ;
  }
  else
  {
    Matrix::range_error();
  }
  return 0;
}
//set a specified element in the matrix
void Matrix::set_element(int row, int col, double val)
{
  if( row < ROW_SIZE && col < COL_SIZE)
  {
    std::cout<<"setting..\n";
    matrix[row][col]=val;
  }
  else
  {
    Matrix::range_error();
  }
}
//retrieve a specific element in the matrix
double Matrix::get_element(int row, int col)
{
  if( row < ROW_SIZE && col < COL_SIZE)
  {
    std::cout<< matrix[row][col]<<std::endl;
  }
  else
  {
    Matrix::range_error();
  }
  return 0;
}
//methods
int Matrix::sum()
{
  for (vector<vector<int>> it = matrix.begin(); it != matrix.end(); ++it)
  {
    var_sum += *it;
    for (int i = 0; i != COL_SIZE; ++i)
    {
      var_sum += *i;
    }
    }
  }
  }
  return var_sum;
  }
double Matrix::find_max(){return 0;}
double Matrix::find_min(){return 0;}
//string to_string(){return 0};
void Matrix::range_error()
{
  fprintf(stderr, "out of range\n" );
}
