//Binary Search Algorithm
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int low =0,high = nums.size()-1;
        while(low<high){
            int mid = (low+high)/2;
            if(mid== low || mid == high){
                break;
            }
           if (nums[mid]<target){
                low = mid;
            }
            else if (nums[mid]> target){
                high= mid;
            }
            else{
                return mid;
            }
        }
        return -1;
        
    }
int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    int res=search(nums, 14);
    cout<<res;
    return 0;
}