#include<bits/stdc++.h>
using namespace std;
int main(){
vector<float> arr = {24.7, 25.1, 28.9, 31.0, 28.6, 30.6, 32.4, 23.0, 25.1, 28.9, 31.0, 28.6, 25.8, 32.4};
int ans=0;
int greaterThan30=0;
for(int i=0;i<arr.size()-5; i++){
    greaterThan30 =0;
    int j=0;
    int count=0;
    for(j =i;j<arr.size();j++){
        if(arr[j] <25){
            break;
        }
        if(arr[j] >30){
            greaterThan30++;
        }
        count++;
    }
    if(greaterThan30 >=3 && count >=5){
        ans += count;
        i= j;
    }
}
return 0;
}