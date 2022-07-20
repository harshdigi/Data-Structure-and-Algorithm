#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
    int oK;
    void backtrack(int n, int cS, int cK,  vector<int> in = {}, int i=1)
    {
        if(cS > n ){ 
            vector<int> temp = {};
            backtrack(n,0,oK,temp,in[0]+1);
        }
        if(cK ==0 ){
            if(cS == n){
            res.push_back(in);
            }
            return;
        }
        if(i>9){
            return; 
        }
        in.push_back(i);
        cS += i;
        backtrack(n,cS,cK-1,in, i+1);
        in.pop_back();
        backtrack(n,cS-i,cK,in, i+1);        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        oK=k;
        backtrack(n, 0, k);
        vector<vector<int>> ans = res;
    
        return res;
    }
int main(){
    combinationSum3(3,9);
return 0;
}