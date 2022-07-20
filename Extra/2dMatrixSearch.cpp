#include<bits/stdc++.h>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowS= matrix.size();
        int colS= matrix[0].size();
        int currRow=0;
        while(currRow<rowS){
            if(target>matrix[currRow][colS-1] )
            currRow++;
            else
            break;
        }
        if(currRow== rowS){
            return false;
        }
        
        int left =0, right= colS-1;
        
        while(left<=right){
            int mid = left+ (right-left)/2;
            
            if(matrix[currRow][mid]==target ){
                return true;
            }
            else if( matrix[currRow][mid]>target){
                right = mid-1;
            }
            else{
                left= mid+1;
            }
        }
        return false;
    }
int main(){
vector<vector<int>> input;
vector<int> row = {1};
input.push_back(row);
searchMatrix(input,2);
return 0;
}