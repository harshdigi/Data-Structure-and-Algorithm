#include<iostream>
using namespace std;
// time complexity: O(n^2)
void bubbleSort(int arr[], int size){

    int last = size;
    while(last--){
        for(int i =0; i<last; i++){
            if(arr[i] >arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
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
    bubbleSort(arr, size);
    cout<<"Sorted array is: ";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<",";
    }
    cout<<arr[size-1];
    cout<<endl;
    return 0;
}