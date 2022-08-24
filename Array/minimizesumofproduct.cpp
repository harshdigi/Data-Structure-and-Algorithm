#include<bits/stdc++.h>
using namespace std;
long long int minValue(vector<int> a, vector<int> b, int n)
    {
        // Your code goes here
        sort(a.begin(), a.end());
        sort(b.begin(),b.end());
        long long int product =0;
        for(int i=0;i<n;i++){
            product += a[i] * b[n- (i+1)];
            
        }
        return product;
    }
int main(){
    vector<int> arr  = {3,1,1};
    vector<int> arr2 = {6,5,4};
minValue(arr,arr2,3);
return 0;
}