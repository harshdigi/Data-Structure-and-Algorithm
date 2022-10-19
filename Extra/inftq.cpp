#include<bits/stdc++.h>
using namespace std;
int fun (int N, vector<int> a){
    unordered_map<int,int> m;
    int ans =0;
    int i=0;
    while(i<N){
        if(m[a[i]]==0){
            m[a[i]]=i+1;
            i++;
        }
        else{
            int j =m[a[i]]-1;
            a[i] = a[i]*2;
            a.erase(a.begin()+ j);
            i=0;
            ans++;
            N=N-1;
            m.clear();
        }
    }
    return ans;
}
int main(){
cout<<fun(5,{1,2,3,4,1});
return 0;
}