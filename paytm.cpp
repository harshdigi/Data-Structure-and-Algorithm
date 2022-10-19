#include<bits/stdc++.h>
using namespace std;
int countGroups(vector<int> arr){
    // size of input array
    int s = arr.size();
    // return number of group 0 if size of array is  0 
    if(s==0){
        return 0;
    }
    
    // return number of group 1 if size of array is  1
    if(s == 1){
        return 1;
    }
    // this keeps the count of number of group
    int count = 1;
    //iterate loop 
    for(int i =1;i<s;i++){
        if(arr[i-1]> arr[i]){
            count++;
        }
    }

    return count;
}
int main(){
    int s = 0;
    cin>>s;
    vector<int> arr ;
    for(int i =0;i<s;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<countGroups(arr);
return 0;
}