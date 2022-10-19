#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int temp = k-1;
        int left =0;
        int right = temp;
        while(temp<n){
            while(left<right){
                swap(arr [left], arr[right]);
                left++;
                right--;
            }
            left = temp+1;
                
            if(temp+k<n){
                right = temp +k;
                
            }
            temp = temp +k;
        }
        if(left !=n){
            reverse(arr.begin()+left, arr.end());
        }
    }
int main(){
vector<long long > in;
in ={1,2,3,4,5,6};
reverseInGroups(in, 6, 4);
return 0;
}