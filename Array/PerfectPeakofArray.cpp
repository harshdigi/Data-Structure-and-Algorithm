/*
"INTERVIEWBIT"
DIFFICULTY = EASY

Given an integer array A of size N.

You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

If it exists return 1 else return 0.

NOTE:

Do not consider the corner elements i.e A[0] and A[N-1] as the answer.

Example Input
Input 1:

 A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
Input 2:

 A = [5, 1, 4, 4]


Example Output
Output 1:

 1
Output 2:

 0


Example Explanation
Explanation 1:

 A[4] = 6 is the element we are looking for.
 All elements on left of A[4] are smaller than it and all elements on right are greater.
Explanation 2:

 No such element exits.*/

#include<bits/stdc++.h>
using namespace std;
vector<int> rightMin(vector<int> A){
    vector<int> res(A.size());
    int i = A.size()-1;
    int min = A[i];
    res[i] = 0;
    i--;
    while(i>=0){
        res[i]= min;
        if(A[i]<min){
            min = A[i];
        }
        i--;
    }
    return res;
}
vector<int> leftMax(vector<int> A){
    vector<int> res(A.size());
    int i = 1;
    int max = 0;
    res[0] = 0;
    max = A[0];
    while(i<A.size()){
        res[i]= max;
        if(A[i]>max){
            max = A[i];
        }
        i++;
    }
    return res;
}
int perfectPeak(vector<int> A) {
    vector<int> left = leftMax(A);
    vector<int> right = rightMin(A);
    for(int i =0;i<A.size();i++){
        if (A[i]>left[i] && A[i]<right[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    vector<int> input = { 22, 9715, 743, 24513, 27369, 13291, 9249, 3336, 17923, 23718, 5304, 17651, 26019, 25044, 21896, 3170, 12760};
    int result = perfectPeak(input);
    cout<< result;
    return 0;
}