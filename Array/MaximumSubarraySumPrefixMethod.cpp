#include<bits/stdc++.h>
using namespace std;
int main(){

    int size =0 ;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size]={0};
    int prefixSum[size] ={0};
    cout<<"Enter the elements of the array, You can maximum insert "<<size<<" elements in the array"<<endl;
    cout<<"Enter the element "<< 1<<": ";
    cin>>arr[0];
    prefixSum[0]= arr[0];
    cout<<endl;
    for(int i=1;i<size;i++){
        cout<<"Enter the element "<< i+1<<": ";
        cin>>arr[i];
        prefixSum[i] = prefixSum[i-1]+arr[i];
        cout<<endl;
    }
    int currSum =0;
    int maxSum =0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++ ){
            currSum =0;
            currSum = prefixSum[j] - prefixSum[i-1];
            if( currSum > maxSum){
                maxSum = currSum;
            }
        }
        
    }
    cout<<"Max Subarray sum is: "<<maxSum;
    return 0;
}