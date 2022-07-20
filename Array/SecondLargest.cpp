#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={10,10,2,3,10};
    int n=5;
    int i=0,j=n-1;
    int max = INT_MIN;
    int x=0;
    int y=0;
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
           second_max =max;
           x=y;
           max=arr[i];
           y=i;
        }
        if(arr[i]<max && arr[i]>second_max){
            second_max=arr[i];
            x=i;

        }
    }
    
    if(second_max==INT_MIN){
        cout<<-1;
    }
    else
    {cout<<second_max;
    cout<<" "<<x;}
    return 0;
}