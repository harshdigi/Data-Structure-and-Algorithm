#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
        int i= s.length()-1,j=t.length()-1;
        int backS=0,backT=0;
        while(i>=0 && j>=0){
            if(s[i]=='#' || t[j]=='#' ){
                if(s[i]=='#'){
                   backS++;
                    i--;
                }
                if(t[j]=='#'){
                    backT++;
                    j--;
                }
            }
            else if (backS!=0 || backT!=0){
                if(backS!=0){
                    i--;
                    backS--;
                }
                if(backT!=0){
                    j--;
                    backT--;
                }
            }
            else{
                if(s[i] != t[j]){
                    return false;
                }
                else{
                    j--;
                    i--;
                }
            }
        }
        if(i>=0 || j>=0){
            return false;
        }
        return true;
            
    }
int main(){
cout<<backspaceCompare("a##c","#a#c");
return 0;
}