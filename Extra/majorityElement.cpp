#include<bits/stdc++.h>
using namespace std;
 int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mymap;
        for(int i : nums){
            mymap[i]++;
            if(mymap[i]>nums.size()/2)return i;
           
        }
        return 0;
    }
int main(){
vector input= {3,2,3};
majorityElement(input);
return 0;
}