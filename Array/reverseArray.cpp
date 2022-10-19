#include<iostream>
using namespace std;

int reverse(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;high--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int arr[]={1,3,4,6,8,4,2,0,11};
    int n=9;

    reverse(arr,n);
    return 0;
}