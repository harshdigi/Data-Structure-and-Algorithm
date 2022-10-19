#include<bits/stdc++.h>
using namespace std;
int findCharAdded(string searchWord, string resultWord){
    int res=0;
    int i=0;
    int j=0;
    if(searchWord.length() ==  0){
        return resultWord.length();
    
    }
    if(resultWord.length() == 0){
        return 0;
    }
    while(i<searchWord.length() && j<resultWord.length()){
        if(searchWord[i] ==resultWord[j]){
            i++;
            j++;
        }
        else {
            i++;
        }
    }
    if(j== resultWord.length()){
        return 0;
    }
    return resultWord.length() -j;
}
int main(){
    string s = "ab";
    string x = "abd";
    int ans = findCharAdded(s, x);
return 0;
}