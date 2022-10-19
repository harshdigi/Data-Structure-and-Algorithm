#include<iostream>

using namespace std;

int main(){
    int arr[]={0,6,5,0,12,8,9,2,0,10,0};

    int n=11;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
             swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}