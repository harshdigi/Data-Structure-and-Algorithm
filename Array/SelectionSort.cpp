#include<iostream>
#include<climits>
using namespace std;
void selectionSort(int arr[], int size){
    for(int i =0;i<size;i++){
        int mini = arr[i];
        int idx=-1;
        for(int j=i+1;j<size;j++){
            if(mini > arr[j]){
                mini = arr[j];
                idx = j;
            }
        }
        if(idx != -1)
        swap(arr[i], arr[idx] );
        
    }
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
    selectionSort(arr, size);
    cout<<"Sorted array is: ";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<",";
    }
    cout<<arr[size-1];
    cout<<endl;
    
return 0;
}