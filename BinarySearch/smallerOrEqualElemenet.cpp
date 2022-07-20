#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> A, int B){
    int high= A.size()-1, low=0;
    int ans=0;
    if(A[0] > B ){
        return  0;
    }
    if(A[high] == B || A[high] <B){
        return high+1;
    }
    if(A[0] == B){
        return 1;
    }
    while(low<=high){
        int mid = low +(high-low)/2;
        if(A[mid] == B || A[mid]<B){
            ans = (mid -0) +1;
            low =mid+1;
        }
        else if (A[mid]> B){
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> input = {1,2,5,5};
    int b= 3;
solve (input, b);
return 0;
}