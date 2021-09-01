/*
INTERVIEWBIT
DIFFICULTY = "Easy"
Problem Description

Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons.


Example Input
Input 1:

 A = [-2, 1, -4, 5, 3]
Input 2:

 A = [1, 3, 4, 1]


Example Output
Output 1:

 1
Output 2:

 5
 */
#include<bits/stdc++.h>
using namespace std;
int MaxMin(vector<int> A){
int n=A.size();
    int min=INT_MAX,max=INT_MIN;
    for(int i =0;i<n;i++){
        if(min>A[i]){
               min= A[i]; 
        }
        if(max<A[i]){
            max=A[i];
        }
    }
    return max+min;
}
    int main()
    {
        vector<int> A= {-2, 1, -4, 5, 3};
        cout<<MaxMin(A);
        return 0;
    }