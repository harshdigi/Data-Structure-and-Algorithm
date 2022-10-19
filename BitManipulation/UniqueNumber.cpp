#include<bits/stdc++.h>
using namespace std;
int uniqueNumber(int arr [], int size){
    int ans=0;
    for(int i=0; i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr [] = {1,1,2,2,4,5,5,6,6};
    cout<< uniqueNumber(arr,  9);
return 0;
}