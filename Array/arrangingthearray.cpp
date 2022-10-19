#include<bits/stdc++.h>
using namespace std;
void Rearrange(vector<int> arr, int n)
{
    // Your code goes here
     int i=0;
    int j=0;
    vector<int> temp;
    int negTill=0;
    while(j<n){
        if(arr[i] <0){
            i++;
            j++;
            negTill++;
        }
        else{
            if(arr[j]>=0){
                temp.push_back(arr[j]);
                j++;
            }
            else{
                swap(arr[i], arr[j]);
                negTill++;
                i++;
                j++;
            }
        }
    }
    i=0;
    for(;negTill<n;negTill++){
        arr[negTill]= temp[i];
        i++;
    }
}
int main(){
vector<int> arr = {2 ,-3,-8,9,6,4,10,-9,5 };
Rearrange(arr, 9);
return 0;
}