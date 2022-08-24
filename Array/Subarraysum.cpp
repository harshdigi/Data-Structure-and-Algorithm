#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        int right =0;
        int left =0;
        long long  currSum =0;
        while(right<n){
            if(currSum==s){
                return {left, right};
            }
            else if(currSum<s){
                currSum+=arr[right];
                right++;
            }
            else{
                currSum-=arr[left];
                left++;
            }
            
        }
        return{-1};
}
int main(){
    vector<int> in ={1,2,3,7,5};
subarraySum(in , 5 ,12);
return 0;
}