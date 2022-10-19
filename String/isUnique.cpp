// Check string unique element
#include<bits/stdc++.h>
using namespace std;
int main(){

string s = "abbd";

sort(s.begin(), s.end());
int i =1;
while(i<s.length()){
    if(s[i-1] == s[i]){
        cout<<"Contains Duplicate";
        break;
    }
    i++;

}
if(i>=s.length()){
    cout<<"No duplicate";
}
return 0;
}