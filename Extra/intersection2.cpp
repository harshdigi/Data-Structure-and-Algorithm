#include<bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
         unordered_map<int,int> m;
        vector<int> ans;
		
		// adding nums1 element in map 
        for(auto i:nums1)m[i]++;
        
        for(int i:nums2)
        if(m[i]) // if current element is in map
        {
            m[i]--; // reduce frequency by 1
            ans.push_back(i); // insert current element in answer
        }
        return ans;
        
    }
int main(){
    vector<int> num1={1,2,2,1},num2={2,2};
    intersect(num1, num2);
return 0;
}
