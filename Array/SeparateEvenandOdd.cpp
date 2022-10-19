#include<bits/stdc++.h>
using namespace std;
vector<int> separte(vector<int> input){
    vector<int> res;
    vector<int> even; 
    vector<int> odd;
    for(int i = 0;i<input.size();i++){
        if(input[i]%2 == 0){
            even.push_back(input[i]);
        }
        else{
           odd.push_back(input[i]); 
        }
    }
    for(int i =0;i<even.size();i++){
        res.push_back(even[i]);
    }
     for(int i =0;i<even.size();i++){
        res.push_back(odd[i]);
    }
    return res;
}
int main(){

return 0;
}