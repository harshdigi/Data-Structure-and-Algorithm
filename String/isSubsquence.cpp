#include<bits/stdc++.h>
using namespace std;
 bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        
        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                i++;
            }
    
            j++;
        }
        if(i>=s.length()){
            return true;
        }
        return false;
    }
int main(){
string s ="bcd";
string t="uuuuubcd";
isSubsequence(s,t);
return 0;
}