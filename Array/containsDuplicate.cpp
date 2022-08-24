#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool checkDuplicate(vector<int> arr){
    unordered_map<int,int> frequency_map;
    for(int  i =0;i< arr.size();i++){
        frequency_map[arr[arr[i]]]++;
        if(frequency_map[arr[i]] > 1){
            return true;
        }
       
    }
    return false;
}
int main(){
    vector<int> input;
    int size;
    cin>>size;
    for(int i =0; i<size;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<checkDuplicate(input);
    return 0;
}