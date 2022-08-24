#include<bits/stdc++.h>
using namespace std;
int unluncky(string s, int n){
    int i=1;
    int count =0;
    int ans = 0;
    while(i<s.length()){
        int j =i;
        count =0;
        while (j<s.length() && s[j] == s[j-1])
        {
            count++;
            j++;
        }

        if(count+1 >=3){
            int x = abs(2- (count+1));
            ans += x;
            i=j;
        }else{i++;}
   
        
    }
    return ans;
}
int main(){
string s = "abbbccccaaaaadccceeeee";
int n = s.length();
unluncky(s,n);
return 0;
}