#include <bits/stdc++.h>
using namespace std;

// generate complete pascal triangle
vector<vector<int>> generate(int numRows) {

  vector<vector<int>> res(numRows); // resultant of size eqaul to numRows
  for (int i = 0; i < numRows; i++) {
    res[i].resize(i + 1); // set the number of column of each row equal to i+1
    res[i][0] = res[i][i] =
        1; // set first and last element of the row equal to 1
    // this loop is to calculate inner element of row
    for (int j = 1; j < i; j++) {
      res[i][j] =
          res[i - 1][j - 1] + res[i - 1][j]; // calculating the current element
    }
  }
  return res;
}

// generate nth row 
vector<int> generateNthRow(int row) {
    row--;
  vector<int> res(row + 1);
  res[0] = res[row] = 1;
  int x = 0, prevD = 1, prevN = 1;
  for (int i = 1; i < row; i++) {
    prevD *= (x + 1);
    prevN *= (row - x);
    res[i] = prevN / prevD;
    x++;
  }
  return res;
}

// generate nth element
int generateElement(int row, int col){
    int res=1;
    for(int i=1;i<col;i++){
        res *= (row-i);
        res /= i;
    }
    return res;
}
int main() {
  generate(6);
  generateNthRow(5);
  generateElement(5,3);
  return 0;
}