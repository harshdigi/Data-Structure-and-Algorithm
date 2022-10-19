#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int low=0,high=nums.size()-1;
        while(low<high){
            if(nums[low]+nums[high]==target){
                res.push_back(low);
                res.push_back(high);
                
                return res;
            }
            else if (nums[low]+ nums[high]<target){
                
                low++;
            }
            else{
                high--;
            }
        }
        
        return res;
        
    }
int main(){
    vector<int> input = {3,2,4};
twoSum( input ,6);
return 0;
}