#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0, temp=n;
    vector<int> res(100);
    while(temp>=1){
        res[count] = temp;
        count++;
        if(count!=100){
            temp--;
        }
        else{
            break;
        }
        if(temp == 0){
            temp = n*2;
            n= temp;
        }
    }
    for(int i =0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}