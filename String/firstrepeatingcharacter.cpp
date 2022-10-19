#include<bits/stdc++.h>
using namespace std;
char firstRepeatingChar(string s){
    int result = INT_MAX;
    int count  [256];
    memset(count,-1, sizeof(count));
    for(int i =0;i<s.length();i++){
        if(count[s[i]] == -1){
        count[s[i]] = i;
        }
        else{
            result = min(result, count[s[i]]);
        }
    }
    return s[result];
}
int main(){  
    cout<<firstRepeatingChar("abcda");
    return 0;
}