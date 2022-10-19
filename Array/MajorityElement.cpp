#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> nums){
     int winner = nums[0], majority_count = 0;
        for(int i:nums) {
            if(i == winner)
                majority_count++;
            else
                majority_count--;
            if(majority_count < 0) {
                majority_count = 1;
                winner = i;
            }
        }
        return winner;
}
int main(){
    vector<int> in ={1,2,3,3,3,1,2,3};
    cout<<solve(in);
return 0;
}