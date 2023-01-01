#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,3,2,4,5};
    int size = nums.size();
    
    for (int i =0;i<size-1; i=i+2){
        cout<< nums[i] + nums[i+1]<<endl;
    }
    if(size%2 != 0){
        cout<<nums[size-1];
    }
    
    return 0;
}
 