#include <iostream>
#include <string>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        
        string s= "";
        string it= strs[0];
        for(int i =0;i<it.length();i++){
            for(int j =1 ;j<strs.size();j++){
                if (it[i]!= strs[j][i]){
                    return s;
                }
                
            }
            s= s+it[i];
        }
        
        return s;
        
    }
int main(){
    vector<string> input = {"apple","app","apptitude"};
    cout<< longestCommonPrefix(input);
return 0;
}