#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int left =0;
    int right  = size-1;
    while(left<=right){
        int mid  = left+ (right-left)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr [mid] < key){
            left = mid+1;
        }
        else if (arr[mid] > key){
            right = mid -1;
        }

    }
    return -1;
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
        if(i>0 && arr[i] < arr[i-1]){
            cout<<"Please enter the items in the array, sorted in ascending order because Binary Search require sorted array, Hence enter the element which is greater than "<<arr[i-1]<<endl;
            i--;
        }
    }
    cout<<"Enter the element you want to search in the array: ";
    int key;
    cin>>key;
    cout<<endl;
    int fountAt = binarySearch(arr, size, key);
    if(fountAt != -1){
        cout<<"Element is found at index "<< fountAt<< " in the array."<<endl;
        }
    else{
        cout<<"Element is not present in the array."<<endl;
    }
return 0;
}