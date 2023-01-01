#include<bits/stdc++.h>
using namespace std;
 bool wordPattern(string pattern, string s) {
        unordered_map<char,string> pattern_to_s;
        unordered_map<string, char> s_to_pattern;
        int j=0;
        int i=0;
        string temp;

        while(i<=s.length() && j<pattern.length()){
            if( s[i] == ' '  || i == s.length()){
                if(pattern_to_s.find(pattern[j]) == pattern_to_s.end() && s_to_pattern.find(temp) == s_to_pattern.end()){
                    pattern_to_s[pattern[j]] = temp;
                    s_to_pattern[temp] = pattern[j];
                    
                }
                else if (pattern_to_s.find(pattern[j]) != pattern_to_s.end() && s_to_pattern.find(temp) != s_to_pattern.end())
                {
                    if(s_to_pattern[temp] != pattern[j]){
                        return false;
                    }
                    if(pattern_to_s[pattern[j]] != temp){
                        return false;
                    }

                }
                else {
                    return false;
                }
                temp="";
                j++;
            }
            else{
                temp+= s[i];
            }
            i++;
        }
        if(i!=s.length()+1)
        return false;
        if(j!=pattern.length()){
            return false;
        }
        return true; 
}
int main(){
    wordPattern("aaa", "aa aa aa aa");
return 0;
}