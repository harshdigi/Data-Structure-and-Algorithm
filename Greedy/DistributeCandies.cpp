#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> A){
   int ans=0;
    int n = A.size();
    for(int i =0;i<A.size();i++){
        int lc=1, rc=1;

        while(i+1<n && A[i+1]>A[i]){
            i++, lc++;
        }

        while(i+1<n && A[i+1]<A[i]){
            i++, rc++;
        }
        if(lc>rc){
            ans += (lc*(lc+1))/2 + (rc*(rc-1))/2;
        }
        else{
            ans += (lc*(lc-1))/2 + (rc*(rc+1))/2;
        }

        if(i+1<n && A[i+1]>A[i]){
            ans--, i--;
        }

    }
    return ans;
}
int main(){

return 0;
}