/* 
LEETCODE "TWO SUM" 
DIFFICULTY - EASY 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1] */

#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int> nums, int target){
     int size = nums.size();
        vector<int> ans;
        unordered_map<int, int> isavailable;
        for(int i =0;i<nums.size();i++){
            int nextValue = target-nums[i];
            auto findValue = isavailable.find(nextValue);
            if(findValue!= isavailable.end()){
                int insertValue = isavailable.at(nextValue)-1;
                ans.push_back(insertValue);
                ans.push_back(i);
                
            }
            else{
                isavailable[nums[i]]= i+1;
            }
        }
        return ans;

}


int main()
{
    vector<int> nums;
    int target;
    int size;
    cout<<"Enter Size of array";
    cin>>size;
    for(int i=0;i<size;i++){
        int insert;
        cin>>insert;
        nums.push_back(insert);
    }
    cout<<"Enter Target";
    cin>>target;
    vector<int> ans = TwoSum(nums, target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}