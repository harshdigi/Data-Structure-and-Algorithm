//Iterative Binary Search
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> input = {6, 8, 10, 12, 15,20,21,22,32};
    int target = 8;

    int low =0, high = input.size()-1;

    while(low<=high){
        int mid = low+ (high-low)/2;
        if(input[mid] == target){
            cout<<mid;
            break;
        }
        else if( input[mid]>target){
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    if(low> high){
        cout<<-1;
    }
return 0;
}