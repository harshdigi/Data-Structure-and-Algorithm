// n =5
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int  j =0;j<i;j++){
            cout<<i<<" ";

        }
        cout<<endl;

    }

return 0;
}