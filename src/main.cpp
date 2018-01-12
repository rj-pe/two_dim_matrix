#include <stdio.h>
#include <iostream>
#include <vector>
#include "matrix.h"

using namespace std;

int main(void)
{
  Matrix* m1 = new Matrix (2,2);
    m1->set_row(0,{1,2});
    m1->set_row(1,{4.0,5});
    cout<<"should return error\n";
    m1->set_row(2,{7,8});
    cout<<"print both rows\n";
    m1->get_row(0);
    m1->get_row(1);
    cout<<"reset 5 to 6\n";
    m1->get_element(1,1);
    m1->set_element(1,1,6);
    m1->get_element(1,1);
    cout<<"1+2+4+6 = ";
    m1->sum();
    cout<<"largest number in matrix:  ";
    m1->find_max();
    cout<<"smallest number in matrix:  ";
    m1->find_min();
}
