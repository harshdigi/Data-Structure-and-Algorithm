#include<bits/stdc++.h>
using namespace std;
 int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int cost =-1;
        unordered_map<int,int> mp;
        
        for(int i=0;i<times.size();i++){
            if(times[i][0] == k){
                if(mp.find(times[i][1]) != mp.end()){
                    cost= min(cost, times[i][2]);
                    mp[times[i][1]] = times[i][2];
                }
                else{
                cost = max(cost, times[i][2]);
                mp[times[i][1]] = times[i][2];}
            }
            else{
                if(mp.find(times[i][1])!=mp.end()){
                    cost = max(cost, mp[times[i][0]]+times[i][2]);
                    mp[times[i][1]] = mp[times[i][0]]+times[i][2];
                }
                
            }
        }
        if(mp.size()!=n-1){
            return -1;
        }
        for(int i=0;i<times.size();i++){
            if(mp.find(times[i][1])==mp.end() && k != times[i][1]){
                return -1;
            }
        }
        return cost;
    }
int main(){

    vector<vector<int>> in = {{1,2,1},{2,3,7},{1,3,4},{2,1,2}};

    int k=1,n=3;
    networkDelayTime(in, n, k);
return 0;
}