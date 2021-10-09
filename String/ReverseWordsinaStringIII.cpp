#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        int left =0,right=1,n=s.size();
        while(left<n && right<n){
            if(right ==n-1){
                
                reverse(s.begin()+left,s.begin()+right+1);
            }
            if(s[right]==' ' ){
                reverse(s.begin()+left,s.begin()+right);
                left=right+1;
                right++;
                
            }
            right++;
        }
        return s;
    }
int main()
{   string s = "You like me";
    reverseWords(s);
    return 0;
}