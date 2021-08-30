/* 
LEETCODE "Longest Substring Without Repeating Characters"
DIFFICULTY - MEDIUM
Given a string s, find the length of the longest substring without repeating characters.
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Example 4:
Input: s = ""
Output: 0
*/
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
        int all[256]={0};
        int max_length=0,l=0;
        for(int i=0;i<s.length();i++)
        {
            if(all[s[i]]!=0){
                l=max(all[s[i]],l);
            }
            all[s[i]]=i+1;
            int curr_len =i-l+1;
            max_length=max(max_length,curr_len);
        }
        return max_length;
 }
int main()
{
    cout<<lengthOfLongestSubstring("abcabcbb");
    return 0;
}