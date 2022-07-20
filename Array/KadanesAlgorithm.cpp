#include<bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector<int> arr){
    int maxFinal =INT_MIN, maxStart = 0 ;
    for(int i =0;i<arr.size();i++){
        maxStart +=  arr[i];
        if(maxFinal < maxStart){
            maxFinal = maxStart;
        }
        if(maxStart < 0){
            maxStart =0;
        }

    }
    return maxFinal;
}
int main(){

return 0;
}

