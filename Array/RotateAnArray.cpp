#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.begin()+k-1);
        reverse(nums.begin()+k,nums.end()+1);
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }
int main()
{
    vector<int> nums ={-1,-100,3,99};
    rotate(nums,2);
    return 0;
}