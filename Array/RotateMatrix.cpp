// Amazon
// Rotata Matrix 90 degree
#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int>> &matrix){
    int row = matrix.size(), col = matrix[0].size();
     // Transpose of matrix
    for(int i =0;i<row ;i++){
        for(int j =i+1 ;j<col; j++){
            swap (matrix[i][j], matrix[j][i]);
        }
    }
    // Rotate each row
    for(int i=0;i<row;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

}
int main(){

return 0;
}