   #include<bits/stdc++.h>
   using namespace std;
   int removeElement(vector<int>& nums, int val) {
        
        int left=0,right=nums.size()-1;
        
        while(left<right){
            if(nums[right] == val){
                right--;
            }
            else if (nums[left] == val){
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            else{
                left++;
            }
        }
        return left+1;
    }
   int main(){
       vector<int> in = {1,1};
   removeElement(in,1);
   return 0;
   }
   