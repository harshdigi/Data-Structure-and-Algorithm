#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> nums, int target){
    int start = 0, end = nums.size()-1;
    
    while()
    int mid = (start + end) /2;

    if(nums[mid] == target){
        return mid;
    } 
    else if(nums[mid] > target){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
}
int main(){
    vector<int> nums = {1,2,3,5,8};
    int target = 5;

    cout<<"Found at" << binarySearch(nums, target);


return 0;
}