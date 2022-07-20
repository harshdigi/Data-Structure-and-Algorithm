#include<bits/stdc++.h>
using namespace std;
int search(vector<int> nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid= (high+low)/2;
            if(nums[mid] == target)return mid;
            else if (nums[low]<= nums[mid]){
                if(target< nums[mid] && nums[low]<= target)high=mid-1;
                else low = mid+1;
            }
            else{
                if(target > nums[mid] && target<= nums[high])
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return -1;
    }
int main(){
vector<int> in =  {5,1,3};
cout<< search(in, 5);
return 0;
}