#include<bits/stdc++.h>
using namespace std;
int findClosestNumber(vector<int>& nums) {
        int min=INT_MAX;
        int ans = 0;
        for(int i =0; i<nums.size();i++){
            if(abs(nums[i]) <min ){
                min = abs(nums[i]);
                ans = nums[i];
            }
            else if(abs(nums[i]) == min ){
                if(ans<nums[i]){
                    ans = nums[i];
                }
            }
        }
        return ans;
    }
int main(){
    vector<int> in ={2,-1,1};
cout<< findClosestNumber(in);
return 0;
}