#include<bits/stdc++.h>
using namespace std;
string getPhoneNumber(string s) {
    istringstream ss(s);
    string w;
    unordered_map<string, char> m;
    m["one"]='1';
    m["two"]='2';
    m["three"] ='3';
    m["four"] = '4';
    m["five"] = '5';
    m["six"] ='6';
    m["seven"] ='7';
    m["eight"]='8';
    m["nine"] ='9';
    m["zero"] = '0';

    int count =0;
    string res;
    while( ss >> w){
        if(w == "double"){
            count = 2;
        }
        else if ( w == "triple"){
            count=3;
        }
        else{
            if(count !=0){
                res.append(count, m[w]);
                count =0;
            }
            else{
                res = res + m[w];
            }
        }
    }
    
    return res;
}
int main(){
getPhoneNumber("five one zero two four eight zero double three two");
return 0;
}