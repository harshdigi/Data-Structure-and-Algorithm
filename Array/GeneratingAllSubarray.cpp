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
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++ ){
            for(int k=i;k<j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
        
    }
    return 0;
}