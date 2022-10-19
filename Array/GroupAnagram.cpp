#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        if(strs.size() == 0){
            return res;
        }
        unordered_map<string,int> index_map;
        int size =0;
        for(int i=0; i<strs.size();i++){
            string temp =strs[i];
            sort(temp.begin(), temp.end());
            if(index_map[temp] ==0){
                vector<string> inp = {strs[i]};
                
                res.push_back(inp);
                size++;
                index_map[temp] = size;
            }
            else{

                res[index_map[temp] -1].push_back(strs[i]);  
            }
        }
        
        return res;
}
int main(){
    vector<string> in = {"eat","tea","tan","ate","nat","bat"};
    groupAnagrams(in);
return 0;
}