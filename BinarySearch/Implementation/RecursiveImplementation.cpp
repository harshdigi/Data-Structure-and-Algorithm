// Recursicve Binary Search

#include<bits/stdc++.h>
using namespace std;

int binarySearch ( vector<int> input, int target, int low, int high){
    if(high<low){
        return -1;
    }
    int mid= low +(high-low)/2;
    if(input[mid] == target){
        return mid;
    }
    else if(input[mid]>target){
       mid = binarySearch(input, target, low, mid-1);
    }
    else {
        mid = binarySearch(input, target, mid+1, high);
    }
    return mid;
}
int main(){
vector<int> input = {6, 8, 10, 12, 15,20,21,22,32};
int target = 6;

int ans = binarySearch(input, target, 0, input.size()-1);
cout<<ans;
return 0;
}

