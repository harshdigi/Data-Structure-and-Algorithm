#include<bits/stdc++.h>
using namespace std;
 int longestConsecutive(vector<int>& nums) {
          int count=1;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans=1;
        
        for(auto it = ++s.begin(); it != s.end(); it++){
            auto it1 = it;
            --it1;
            if( *it1 + 1   == *it ){
                count++;
            }
            else{
                if(count > ans){
                    ans = count;
                }
                count =1;
            }
        }
       return count>ans? count:ans; 
}
int main(){
vector<int> in = {100,4,1,3,2,101, 103, 104, 105, 106, 107, 108};
cout<<longestConsecutive(in);
return 0;
}