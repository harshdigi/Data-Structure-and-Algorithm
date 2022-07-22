// Program to Find Largest and Smallest Element
//Easy
#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
int largestElement(int arr[], int size){
    int max = INT_MIN;
    for(int i =0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    } 
    return max;    
}
int smallestElement(int arr[], int size){
    int min  = INT_MAX;
    for(int i =0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
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
    cout<<"Largest Element in the array is: "<<largestElement(arr, size)<<endl;
    cout<<"Smallest Element in the array is: "<<smallestElement(arr, size)<<endl;
    return 0;
}