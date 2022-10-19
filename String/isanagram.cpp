#include<bits/stdc++.h>
using namespace std;
 bool isAnagram(string s, string t) {
        // creating this array to store the fq of the characters
        // we are creating array of size 256 because there are total 256 character in ASCII

        int arr[256] ={0};

        // if length of given string are equal then only they can be anagram of each other
        if(s.length()!= t.length()){
            return false;
        }
        // in this loop we are increasing as well as decreasing the frequency of characters simultaneouly
        // anagrams should have equal number of characters and equal freq......
        for(int i=0;i<s.length();i++){
            arr[s[i]]++;
            arr[t[i]]--;
        }
        // in this loop we are checking the both string have cancelled out the frequency of each character
        // which means after increasing and decreasing the frequency became zero 
        // if all characters frequency is not zero we return false 
        // else we return true

        for(int i=0;i<256;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }

    // time complexity  O(n)
    // space complexity  O(1) or O(256);
int main(){
cout<< isAnagram("anagram", "nagaram");
return 0;
}