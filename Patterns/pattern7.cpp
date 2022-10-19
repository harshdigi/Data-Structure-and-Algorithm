// n =5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j =0 ;j<i;j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}