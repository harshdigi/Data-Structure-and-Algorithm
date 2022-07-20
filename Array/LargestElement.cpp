#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={10,2,30,20,6};
    int n=5;
    int i=0,j=n-1;
    int max = INT_MIN;
    while(i<=j){
        if(arr[i]>max){
            max=arr[i];
        }
         if(arr[j]>max){
            max=arr[j];
        }

        i++;
        j--;
    }
    cout<<max;
    return 0;
}