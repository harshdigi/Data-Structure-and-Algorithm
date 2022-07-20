#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        //to
         long size = nums.size();
        for(long i : nums){
            
            i = i > size ? i-size : i;
            if(nums[i-1] > size){
                return i;
            } else {
                nums[i-1] += size;
            }
        }
        return nums[size-1];
}
int main(){
vector<int> nums = {3,1,3,4,2};
findDuplicate(nums);
return 0;
}