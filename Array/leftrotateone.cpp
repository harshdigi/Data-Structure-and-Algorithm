#include<iostream>
using namespace std;

int leftroateone(int arr[],int n){
    
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int arr[]={1,3,4,6,8,4,2,0,11};
    int n=9;

    leftroateone(arr,n);
    return 0;
}