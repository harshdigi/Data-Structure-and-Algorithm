#include<bits/stdc++.h>
using namespace std;
 long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        
        int ans=0;
        
        for(int i=0;i<= total;i=i+cost1){
            int rem = total-i;
            if(cost2<=rem){
                ans  += (rem/cost2)+1;
            }
            else{
            ans++;}
        }
        return ans;
    }
int main(){
cout<<waysToBuyPensPencils(100,1,1);
return 0;
}