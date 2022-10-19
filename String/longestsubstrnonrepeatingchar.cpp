#include<bits/stdc++.h>
using namespace std;
 int lengthOfLongestSubstring(string s) {
        int arr[256] ={0};
        int left =0,right =1;
        int ans =1;
        arr[s[left]]++;
        while(right <s.length()){
            arr[s[right]]++;
            if(arr[s[right]] <= 1){
                ans = max(ans, right -left +1);
            }
            else{
                arr[s[left]]--;
                left++;
            }
            right++;
            
        }
        return ans;
}
int main(){
    string s = "abcabcbb";
    lengthOfLongestSubstring(s);
return 0;
}