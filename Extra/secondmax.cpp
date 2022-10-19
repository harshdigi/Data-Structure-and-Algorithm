#include<bits/stdc++.h>
using namespace std;
int secondlargestfreq(vector<int> arr){
    unordered_map<int,int> mymap;
    for(int i;i<arr.size();i++){
        mymap[arr[i]]++;
    }
    int max = INT_MIN;
    
    for(int i =0;i<arr.size();i++){
       if(max<mymap[arr[i]]){
           max= arr[i];
       } 
    }
    int max2 = INT_MIN;
    for(int i =0;i<arr[i];i++){
        if(max2<max && max2<mymap[arr[i]]){
            max2 = arr[i];
        }
    }
    return max2;
}
int main(){
 vector<int> arr = {1,2,2,3,4,5,5,5,6};
 cout<<secondlargestfreq(arr);
}