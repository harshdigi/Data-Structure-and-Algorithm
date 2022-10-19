#include<bits/stdc++.h>
using namespace std;
int main(){

    int size =0 ;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size]={0};
    cout<<"Enter the elements of the array, You can maximum insert "<<size<<" elements in the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<< i+1<<": ";
        cin>>arr[i];
        cout<<endl;
    }
    int maxSum =0;
    int currSum =0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++ ){
            currSum = 0;
            for(int k=i;k<j;k++){
                currSum+=arr[k];
            }
            if(currSum>maxSum){
                maxSum = currSum;
            }
        }
        
    }
    cout<<"Maximum Subarray sum is:"<< maxSum<<endl;
    return 0;
}