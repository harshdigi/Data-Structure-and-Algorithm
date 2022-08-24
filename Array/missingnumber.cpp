#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum =0;
        for(int i=0;i<n-1;i++){
            sum+=array[i];
        }
        int mSum =(n*(n+1))/2;
        return  mSum -sum ;
}
int main(){
int n =7;
vector<int> arr= {2,3, 4, 1, 6, 7};
MissingNumber(arr, n);
return 0;
}