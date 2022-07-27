#include<iostream>
using namespace std;
void insertionSort(int arr[], int size);
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
    insertionSort(arr, size);
    cout<<"Sorted array is: ";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<",";
    }
    cout<<arr[size-1];
    cout<<endl;
    return 0;

}

void insertionSort(int arr[], int size){
    int sortedTill = 0;
    for(int i =1; i<size;i++){
        int curr_Element = i;
        while(curr_Element>0 && arr[curr_Element-1]> arr[curr_Element] ){
            swap (arr[curr_Element] , arr [curr_Element-1]);
            curr_Element--;
           
        }
    }
}