#include<bits/stdc++.h>
using namespace std;
  vector<int> sortedSquares(vector<int>& nums) {
         int n = nums.size();
        vector<int> res(nums.size());
        if(n==1){
            res[0]=(nums[0]*nums[0]);
            return res;
        }
        
        int i=0,k=0;
        for(;i<n && nums[i]<0;i++){}
         int j=i-1;
        while(j>=0 && i<n){
            int sq1= nums[j]*nums[j], sq2= nums[i]* nums[i];
            if(sq1<sq2){res[k++] = sq1; j--;}
            else {res[k++]= sq2; i++;}
           
        }
        for(;i<n;i++){
            res[k++] = nums[i]*nums[i];
        }
        
        for(;j>=0;j--){
            res[k++] = nums[j]*nums[j];
        }
        return res;
    }
int main()
{   
    vector<int> input ={-4,-3,-2,-1};
    sortedSquares(input);

    return 0;
}