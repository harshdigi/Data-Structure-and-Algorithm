#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int i=65;
for(int i=1;i<=n;i++){
    for(int j =n-1;j>=0;j--){
        if(n-j >=i){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
}
return 0;
}