#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    unordered_map<int,int> m;
    long ans=0;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int target = arr[i];
        int left = (i-target+1>=0)? i-target+1 : 0;
        if(m.find(target)!= m.end() && m[target]>=left){
            left = m[target]+1;
        }
        int right= (left+target-1>=n)? n-1: left+target-1; 
        if(right - left+1   != target || left>right){continue;}
        ans += min((i-left+1), (n-right));
        m[target] = i;
    }
    cout<< ans<<endl;
}
return 0;
}