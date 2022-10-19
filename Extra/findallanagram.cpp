#include<bits/stdc++.h>
using namespace std;
  
    vector<int> findAnagrams(string s, string p) {
        int sizeS = s.length();
        int sizeP = p.length();
        
        vector<int> hashS(26,0);
        vector<int> hashP(26,0);
        
        for(int i=0;i<sizeP;i++){
            hashS[s[i] - 'a']++;
            hashP[p[i] - 'a']++;
        }
        vector<int> ans;
        
        int i=0,j=sizeP-1;
        
        while(j<sizeS){
            if(hashS==hashP){
                ans.push_back(i);  
            }
            hashS[s[i]-'a']--;
            i++;
            j++;
            hashS[s[j]-'a']++;
           
            
        }
        return ans;
    }
int main(){
    vector<int>ans = findAnagrams("cbaebabacd","abc");
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}